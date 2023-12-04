/*
// Send Email Using Nodemailer
async function sendEmail(time, list) {
    console.log(list);
    try {
        const transporter = nodemailer.createTransport({
            service: 'Gmail',
            auth: {
                user: 'akashbhande3@gmail.com',
                pass: 'wsglqripsykrfhkk',
            },
        });

        const sunitaData = await Sunita.findOne();

        if (!sunitaData) {
            console.error('No data found for sending mail');
            return;
        }

        const formattedList = list.map(item => `- ${item}`).join('\n');

        const mailOptions = {
            from: 'akashbhande3@gmail.com',
            to: sunitaData.email,
            subject: 'Regarding Medication...',
            text: `Hello,\n\nPlease take the following medications:\n\n${formattedList}\n\nRegards,\nOldcare`,
        };

        const result = await transporter.sendMail(mailOptions);
        console.log('Email sent successfully:', result);
    } catch (error) {
        console.error('Error sending email:', error);
        console.log('Email content:', mailOptions.text);
    }
}

// Using Node Cron to send Email at specific time
cron.schedule('00 09 * * *', async () => {
    try {
        const morningMedicines = await Medicine.find({ morning: { $exists: true } });
        sendEmail('morning', morningMedicines);
    } catch (err) {
        console.error('Error sending morning emails:', err);
    }
});

cron.schedule('0 14 * * *', async () => {
    try {
        const afternoonMedicines = await Medicine.find({ afternoon: { $exists: true } });
        sendEmail('afternoon', afternoonMedicines);
    } catch (err) {
        console.error('Error sending afternoon emails:', err);
    }
});

cron.schedule('0 19 * * *', async () => {
    try {
        const eveningMedicines = await Medicine.find({ evening: { $exists: true } });
        sendEmail('evening', eveningMedicines);
    } catch (err) {
        console.error('Error sending evening emails:', err);
    }
});

I'm absolutely thrilled with the code I've crafted! Learning to wield these two npm modules—nodemailer and cron—was a 
challenging yet incredibly rewarding experience. Prior to this project, I hadn't ventured into implementing these modules 
in any of my projects. The process of unraveling their intricacies and integrating them into my Node.js application was both
a challenge and a delight. This hands-on experience has not only broadened my skill set but also filled me with a sense of 
accomplishment. I can confidently say that conquering these modules has added a valuable feather to my coding cap!


*/