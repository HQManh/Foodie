// rea decompile_all
// name: _GAME.Bridge.R1UserTextSupport$$.cctor
// address: 0x7768548
// body: available
// range: 0x7768548-0x7769b4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7769b44 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7769b48 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7769b4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_R1UserTextSupport___cctor(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((DAT_09522c7d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b09b8);
    FUN_03f5c2a4(&DAT_091aa508);
    FUN_03f5c2a4(&DAT_0917cd90);
    FUN_03f5c2a4(&DAT_0917b9d8);
    FUN_03f5c2a4(&DAT_09189998);
    FUN_03f5c2a4(&DAT_09180b80);
    FUN_03f5c2a4(&DAT_091938b0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091807b0);
    FUN_03f5c2a4(&DAT_092040c0);
    FUN_03f5c2a4(&DAT_09209090);
    FUN_03f5c2a4(&DAT_09223ba0);
    FUN_03f5c2a4(&DAT_09200d68);
    FUN_03f5c2a4(&DAT_09209050);
    FUN_03f5c2a4(&DAT_0920c2d8);
    FUN_03f5c2a4(&DAT_0920c6e8);
    FUN_03f5c2a4(&DAT_0920c2d0);
    FUN_03f5c2a4(&DAT_0920c2e0);
    FUN_03f5c2a4(&DAT_0920cbe8);
    FUN_03f5c2a4(&DAT_091febb8);
    FUN_03f5c2a4(&DAT_092061e8);
    FUN_03f5c2a4(&DAT_09206708);
    FUN_03f5c2a4(&DAT_09207078);
    FUN_03f5c2a4(&DAT_09203d68);
    FUN_03f5c2a4(&DAT_092221a0);
    FUN_03f5c2a4(&DAT_09222198);
    FUN_03f5c2a4(&DAT_092080e8);
    FUN_03f5c2a4(&DAT_09206ad0);
    FUN_03f5c2a4(&DAT_09209088);
    FUN_03f5c2a4(&DAT_09209080);
    FUN_03f5c2a4(&DAT_09209068);
    FUN_03f5c2a4(&DAT_0920dde0);
    FUN_03f5c2a4(&DAT_09209078);
    FUN_03f5c2a4(&DAT_09210550);
    FUN_03f5c2a4(&DAT_09213980);
    FUN_03f5c2a4(&DAT_092090b0);
    FUN_03f5c2a4(&DAT_0920c540);
    FUN_03f5c2a4(&DAT_0921f0b0);
    FUN_03f5c2a4(&DAT_09208858);
    FUN_03f5c2a4(&DAT_091f93e0);
    FUN_03f5c2a4(&DAT_0921f4c0);
    FUN_03f5c2a4(&DAT_09210880);
    FUN_03f5c2a4(&DAT_09206d48);
    FUN_03f5c2a4(&DAT_09226f28);
    FUN_03f5c2a4(&DAT_09207088);
    FUN_03f5c2a4(&DAT_09203e38);
    FUN_03f5c2a4(&DAT_09209060);
    FUN_03f5c2a4(&DAT_09201288);
    FUN_03f5c2a4(&DAT_092033c0);
    FUN_03f5c2a4(&DAT_09209098);
    FUN_03f5c2a4(&DAT_091fbd38);
    FUN_03f5c2a4(&DAT_0920eab8);
    FUN_03f5c2a4(&DAT_091f9390);
    FUN_03f5c2a4(&DAT_09209058);
    FUN_03f5c2a4(&DAT_091fbe88);
    FUN_03f5c2a4(&DAT_09206700);
    FUN_03f5c2a4(&DAT_091fd1d8);
    FUN_03f5c2a4(&DAT_09203e58);
    FUN_03f5c2a4(&DAT_0920a858);
    FUN_03f5c2a4(&DAT_092090a0);
    FUN_03f5c2a4(&DAT_092045c8);
    FUN_03f5c2a4(&DAT_091fbcb8);
    FUN_03f5c2a4(&DAT_0920de88);
    FUN_03f5c2a4(&DAT_0921f990);
    FUN_03f5c2a4(&DAT_0920c0e0);
    FUN_03f5c2a4(&DAT_091f9398);
    FUN_03f5c2a4(&DAT_091fcc20);
    FUN_03f5c2a4(&DAT_09222ca0);
    FUN_03f5c2a4(&DAT_0920d508);
    FUN_03f5c2a4(&DAT_09206ac8);
    FUN_03f5c2a4(&DAT_091fbca8);
    FUN_03f5c2a4(&DAT_092095c0);
    FUN_03f5c2a4(&DAT_091f93d8);
    FUN_03f5c2a4(&DAT_09207d50);
    FUN_03f5c2a4(&DAT_092179b0);
    FUN_03f5c2a4(&DAT_092090a8);
    FUN_03f5c2a4(&DAT_0921f9b0);
    FUN_03f5c2a4(&DAT_0920c2c8);
    FUN_03f5c2a4(&DAT_09200870);
    FUN_03f5c2a4(&DAT_0921f0c8);
    FUN_03f5c2a4(&DAT_09203968);
    FUN_03f5c2a4(&DAT_09209070);
    FUN_03f5c2a4(&DAT_09208618);
    DAT_09522c7d = 1;
  }
  lVar1 = FUN_03f5c394(DAT_09180b80,8);
  lVar2 = thunk_FUN_03f9944c(DAT_091938b0);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = DAT_091fd1d8;
    thunk_FUN_03f5d7b8();
    lVar3 = FUN_03f5c394(DAT_091807b0,2);
    if (lVar3 != 0) {
      if ((*(int *)(lVar3 + 0x18) != 0) &&
         (*(undefined4 *)(lVar3 + 0x20) = 0x6f22, *(int *)(lVar3 + 0x18) != 1)) {
        *(long *)(lVar2 + 0x18) = lVar3;
        *(undefined4 *)(lVar3 + 0x24) = 0x3042;
        thunk_FUN_03f5d7b8((long *)(lVar2 + 0x18));
        uVar5 = DAT_091805f8;
        *(undefined1 *)(lVar2 + 0x28) = 1;
        lVar3 = FUN_03f5c394(uVar5,0x11);
        if (lVar3 == 0) goto LAB_07769b4c;
        if (*(int *)(lVar3 + 0x18) != 0) {
          *(undefined8 *)(lVar3 + 0x20) = DAT_09209068;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x20));
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar3 + 0x28) = DAT_09209090;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28));
            if (2 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x30) = DAT_09209080;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x30));
              if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
                *(undefined8 *)(lVar3 + 0x38) = DAT_092090a8;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x38));
                if (4 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x40) = DAT_0920d508;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x40));
                  if (5 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x48) = DAT_09200d68;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x48));
                    if (6 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined8 *)(lVar3 + 0x50) = DAT_09207d50;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x50));
                      if ((*(uint *)(lVar3 + 0x18) & 0xfffffff8) != 0) {
                        *(undefined8 *)(lVar3 + 0x58) = DAT_0920a858;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x58));
                        if (8 < *(uint *)(lVar3 + 0x18)) {
                          *(undefined8 *)(lVar3 + 0x60) = DAT_092040c0;
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x60));
                          if (9 < *(uint *)(lVar3 + 0x18)) {
                            *(undefined8 *)(lVar3 + 0x68) = DAT_09226f28;
                            thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x68));
                            if (10 < *(uint *)(lVar3 + 0x18)) {
                              *(undefined8 *)(lVar3 + 0x70) = DAT_0920c540;
                              thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x70));
                              if (0xb < *(uint *)(lVar3 + 0x18)) {
                                *(undefined8 *)(lVar3 + 0x78) = DAT_0921f9b0;
                                thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x78));
                                if (0xc < *(uint *)(lVar3 + 0x18)) {
                                  *(undefined8 *)(lVar3 + 0x80) = DAT_09213980;
                                  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x80));
                                  if (0xd < *(uint *)(lVar3 + 0x18)) {
                                    *(undefined8 *)(lVar3 + 0x88) = DAT_0921f4c0;
                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x88));
                                    if (0xe < *(uint *)(lVar3 + 0x18)) {
                                      *(undefined8 *)(lVar3 + 0x90) = DAT_0921f990;
                                      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x90));
                                      if ((*(uint *)(lVar3 + 0x18) & 0xfffffff0) != 0) {
                                        *(undefined8 *)(lVar3 + 0x98) = DAT_09222ca0;
                                        thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x98));
                                        if (0x10 < *(uint *)(lVar3 + 0x18)) {
                                          *(undefined8 *)(lVar3 + 0xa0) = DAT_091fd1d8;
                                          thunk_FUN_03f5d7b8();
                                          *(long *)(lVar2 + 0x20) = lVar3;
                                          thunk_FUN_03f5d7b8((long *)(lVar2 + 0x20),lVar3);
                                          if (lVar1 != 0) {
                                            if (*(int *)(lVar1 + 0x18) == 0) goto LAB_07769b48;
                                            *(long *)(lVar1 + 0x20) = lVar2;
                                            thunk_FUN_03f5d7b8((long *)(lVar1 + 0x20),lVar2);
                                            lVar2 = thunk_FUN_03f9944c(DAT_091938b0);
                                            System_Object___ctor(lVar2,0);
                                            if (lVar2 != 0) {
                                              *(undefined8 *)(lVar2 + 0x10) = DAT_09203d68;
                                              thunk_FUN_03f5d7b8();
                                              lVar3 = FUN_03f5c394(DAT_091807b0,1);
                                              if (lVar3 != 0) {
                                                if (*(int *)(lVar3 + 0x18) != 0) {
                                                  *(long *)(lVar2 + 0x18) = lVar3;
                                                  *(undefined4 *)(lVar3 + 0x20) = 0xd55c;
                                                  thunk_FUN_03f5d7b8((long *)(lVar2 + 0x18));
                                                  uVar5 = DAT_091805f8;
                                                  *(undefined1 *)(lVar2 + 0x28) = 1;
                                                  lVar3 = FUN_03f5c394(uVar5,9);
                                                  if (lVar3 == 0) goto LAB_07769b4c;
                                                  if (*(int *)(lVar3 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar3 + 0x20) = DAT_09209068;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x20))
                                                    ;
                                                    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0)
                                                    {
                                                      *(undefined8 *)(lVar3 + 0x28) = DAT_09209088;
                                                      thunk_FUN_03f5d7b8((undefined8 *)
                                                                         (lVar3 + 0x28));
                                                      if (2 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x30) = DAT_0920d508
                                                        ;
                                                        thunk_FUN_03f5d7b8((undefined8 *)
                                                                           (lVar3 + 0x30));
                                                        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc)
                                                            != 0) {
                                                          *(undefined8 *)(lVar3 + 0x38) =
                                                               DAT_0920c6e8;
                                                          thunk_FUN_03f5d7b8((undefined8 *)
                                                                             (lVar3 + 0x38));
                                                          if (4 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x40) =
                                                                 DAT_09200d68;
                                                            thunk_FUN_03f5d7b8((undefined8 *)
                                                                               (lVar3 + 0x40));
                                                            if (5 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x48) =
                                                                   DAT_091fbca8;
                                                              thunk_FUN_03f5d7b8((undefined8 *)
                                                                                 (lVar3 + 0x48));
                                                              if (6 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x50) =
                                                                     DAT_09208618;
                                                                thunk_FUN_03f5d7b8((undefined8 *)
                                                                                   (lVar3 + 0x50));
                                                                if ((*(uint *)(lVar3 + 0x18) &
                                                                    0xfffffff8) != 0) {
                                                                  *(undefined8 *)(lVar3 + 0x58) =
                                                                       DAT_0921f0b0;
                                                                  thunk_FUN_03f5d7b8((undefined8 *)
                                                                                     (lVar3 + 0x58))
                                                                  ;
                                                                  if (8 < *(uint *)(lVar3 + 0x18)) {
                                                                    *(undefined8 *)(lVar3 + 0x60) =
                                                                         DAT_091fd1d8;
                                                                    thunk_FUN_03f5d7b8();
                                                                    *(long *)(lVar2 + 0x20) = lVar3;
                                                                    thunk_FUN_03f5d7b8((long *)(
                                                  lVar2 + 0x20),lVar3);
                                                  if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
                                                    *(long *)(lVar1 + 0x28) = lVar2;
                                                    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x28),lVar2)
                                                    ;
                                                    lVar2 = thunk_FUN_03f9944c(DAT_091938b0);
                                                    System_Object___ctor(lVar2,0);
                                                    if (lVar2 != 0) {
                                                      *(undefined8 *)(lVar2 + 0x10) = DAT_0920eab8;
                                                      thunk_FUN_03f5d7b8();
                                                      lVar3 = FUN_03f5c394(DAT_091807b0,1);
                                                      if (lVar3 != 0) {
                                                        if (*(int *)(lVar3 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar3 + 0x20) = 0xe01;
                                                          *(long *)(lVar2 + 0x18) = lVar3;
                                                          thunk_FUN_03f5d7b8();
                                                          lVar3 = FUN_03f5c394(DAT_091805f8,6);
                                                          if (lVar3 == 0) goto LAB_07769b4c;
                                                          if (*(int *)(lVar3 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar3 + 0x20) =
                                                                 DAT_092090b0;
                                                            thunk_FUN_03f5d7b8((undefined8 *)
                                                                               (lVar3 + 0x20));
                                                            if ((*(uint *)(lVar3 + 0x18) &
                                                                0xfffffffe) != 0) {
                                                              *(undefined8 *)(lVar3 + 0x28) =
                                                                   DAT_09210880;
                                                              thunk_FUN_03f5d7b8((undefined8 *)
                                                                                 (lVar3 + 0x28));
                                                              if (2 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x30) =
                                                                     DAT_0920dde0;
                                                                thunk_FUN_03f5d7b8((undefined8 *)
                                                                                   (lVar3 + 0x30));
                                                                if ((*(uint *)(lVar3 + 0x18) &
                                                                    0xfffffffc) != 0) {
                                                                  *(undefined8 *)(lVar3 + 0x38) =
                                                                       DAT_09206ac8;
                                                                  thunk_FUN_03f5d7b8((undefined8 *)
                                                                                     (lVar3 + 0x38))
                                                                  ;
                                                                  if (4 < *(uint *)(lVar3 + 0x18)) {
                                                                    *(undefined8 *)(lVar3 + 0x40) =
                                                                         DAT_09206ad0;
                                                                    thunk_FUN_03f5d7b8((undefined8 *
                                                                                       )(lVar3 + 
                                                  0x40));
                                                  if (5 < *(uint *)(lVar3 + 0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x48) = DAT_09223ba0;
                                                    thunk_FUN_03f5d7b8();
                                                    *(long *)(lVar2 + 0x20) = lVar3;
                                                    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x20),lVar3)
                                                    ;
                                                    *(undefined8 *)(lVar2 + 0x30) = DAT_09207088;
                                                    thunk_FUN_03f5d7b8();
                                                    if (2 < *(uint *)(lVar1 + 0x18)) {
                                                      *(long *)(lVar1 + 0x30) = lVar2;
                                                      thunk_FUN_03f5d7b8((long *)(lVar1 + 0x30),
                                                                         lVar2);
                                                      lVar2 = thunk_FUN_03f9944c(DAT_091938b0);
                                                      System_Object___ctor(lVar2,0);
                                                      if (lVar2 != 0) {
                                                        *(undefined8 *)(lVar2 + 0x10) = DAT_091fbd38
                                                        ;
                                                        thunk_FUN_03f5d7b8();
                                                        lVar3 = FUN_03f5c394(DAT_091807b0,2);
                                                        if (lVar3 != 0) {
                                                          if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                             (*(undefined4 *)(lVar3 + 0x20) = 0x628,
                                                             *(int *)(lVar3 + 0x18) != 1)) {
                                                            *(undefined4 *)(lVar3 + 0x24) = 0xfe91;
                                                            *(long *)(lVar2 + 0x18) = lVar3;
                                                            thunk_FUN_03f5d7b8();
                                                            lVar3 = FUN_03f5c394(DAT_091805f8,7);
                                                            if (lVar3 == 0) goto LAB_07769b4c;
                                                            if (*(int *)(lVar3 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar3 + 0x20) =
                                                                   DAT_09209050;
                                                              thunk_FUN_03f5d7b8((undefined8 *)
                                                                                 (lVar3 + 0x20));
                                                              if ((*(uint *)(lVar3 + 0x18) &
                                                                  0xfffffffe) != 0) {
                                                                *(undefined8 *)(lVar3 + 0x28) =
                                                                     DAT_09209060;
                                                                thunk_FUN_03f5d7b8((undefined8 *)
                                                                                   (lVar3 + 0x28));
                                                                if (2 < *(uint *)(lVar3 + 0x18)) {
                                                                  *(undefined8 *)(lVar3 + 0x30) =
                                                                       DAT_092033c0;
                                                                  thunk_FUN_03f5d7b8((undefined8 *)
                                                                                     (lVar3 + 0x30))
                                                                  ;
                                                                  if ((*(uint *)(lVar3 + 0x18) &
                                                                      0xfffffffc) != 0) {
                                                                    *(undefined8 *)(lVar3 + 0x38) =
                                                                         DAT_0920c2c8;
                                                                    thunk_FUN_03f5d7b8((undefined8 *
                                                                                       )(lVar3 + 
                                                  0x38));
                                                  if (4 < *(uint *)(lVar3 + 0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x40) = DAT_09222198;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x40))
                                                    ;
                                                    if (5 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x48) = DAT_09223ba0;
                                                      thunk_FUN_03f5d7b8((undefined8 *)
                                                                         (lVar3 + 0x48));
                                                      if (6 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x50) = DAT_092179b0
                                                        ;
                                                        thunk_FUN_03f5d7b8();
                                                        *(long *)(lVar2 + 0x20) = lVar3;
                                                        thunk_FUN_03f5d7b8((long *)(lVar2 + 0x20),
                                                                           lVar3);
                                                        *(undefined8 *)(lVar2 + 0x30) = DAT_09207078
                                                        ;
                                                        thunk_FUN_03f5d7b8();
                                                        if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc)
                                                            != 0) {
                                                          *(long *)(lVar1 + 0x38) = lVar2;
                                                          thunk_FUN_03f5d7b8((long *)(lVar1 + 0x38),
                                                                             lVar2);
                                                          lVar2 = thunk_FUN_03f9944c(DAT_091938b0);
                                                          System_Object___ctor(lVar2,0);
                                                          if (lVar2 != 0) {
                                                            *(undefined8 *)(lVar2 + 0x10) =
                                                                 DAT_09200870;
                                                            thunk_FUN_03f5d7b8();
                                                            lVar3 = FUN_03f5c394(DAT_091807b0,1);
                                                            if (lVar3 != 0) {
                                                              if (*(int *)(lVar3 + 0x18) != 0) {
                                                                *(undefined4 *)(lVar3 + 0x20) =
                                                                     0x915;
                                                                *(long *)(lVar2 + 0x18) = lVar3;
                                                                thunk_FUN_03f5d7b8();
                                                                lVar3 = FUN_03f5c394(DAT_091805f8,6)
                                                                ;
                                                                if (lVar3 == 0) goto LAB_07769b4c;
                                                                if (*(int *)(lVar3 + 0x18) != 0) {
                                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                                       DAT_09209070;
                                                                  thunk_FUN_03f5d7b8((undefined8 *)
                                                                                     (lVar3 + 0x20))
                                                                  ;
                                                                  if ((*(uint *)(lVar3 + 0x18) &
                                                                      0xfffffffe) != 0) {
                                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                                         DAT_09206708;
                                                                    thunk_FUN_03f5d7b8((undefined8 *
                                                                                       )(lVar3 + 
                                                  0x28));
                                                  if (2 < *(uint *)(lVar3 + 0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x30) = DAT_09206700;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x30))
                                                    ;
                                                    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0)
                                                    {
                                                      *(undefined8 *)(lVar3 + 0x38) = DAT_092045c8;
                                                      thunk_FUN_03f5d7b8((undefined8 *)
                                                                         (lVar3 + 0x38));
                                                      if (4 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x40) = DAT_09208858
                                                        ;
                                                        thunk_FUN_03f5d7b8((undefined8 *)
                                                                           (lVar3 + 0x40));
                                                        if (5 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x48) =
                                                               DAT_0921f0c8;
                                                          thunk_FUN_03f5d7b8();
                                                          *(long *)(lVar2 + 0x20) = lVar3;
                                                          thunk_FUN_03f5d7b8((long *)(lVar2 + 0x20),
                                                                             lVar3);
                                                          if (4 < *(uint *)(lVar1 + 0x18)) {
                                                            *(long *)(lVar1 + 0x40) = lVar2;
                                                            thunk_FUN_03f5d7b8((long *)(lVar1 + 0x40
                                                                                       ),lVar2);
                                                            lVar2 = thunk_FUN_03f9944c(DAT_091938b0)
                                                            ;
                                                            System_Object___ctor(lVar2,0);
                                                            if (lVar2 != 0) {
                                                              *(undefined8 *)(lVar2 + 0x10) =
                                                                   DAT_09203e38;
                                                              thunk_FUN_03f5d7b8();
                                                              lVar3 = FUN_03f5c394(DAT_091807b0,1);
                                                              if (lVar3 != 0) {
                                                                if (*(int *)(lVar3 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar3 + 0x20) =
                                                                       0x5d0;
                                                                  *(long *)(lVar2 + 0x18) = lVar3;
                                                                  thunk_FUN_03f5d7b8();
                                                                  lVar3 = FUN_03f5c394(DAT_091805f8,
                                                                                       5);
                                                                  if (lVar3 == 0) goto LAB_07769b4c;
                                                                  if (*(int *)(lVar3 + 0x18) != 0) {
                                                                    *(undefined8 *)(lVar3 + 0x20) =
                                                                         DAT_09209078;
                                                                    thunk_FUN_03f5d7b8((undefined8 *
                                                                                       )(lVar3 + 
                                                  0x20));
                                                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar3 + 0x28) = DAT_091fbe88;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28))
                                                    ;
                                                    if (2 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x30) = DAT_0920c2d0;
                                                      thunk_FUN_03f5d7b8((undefined8 *)
                                                                         (lVar3 + 0x30));
                                                      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) !=
                                                          0) {
                                                        *(undefined8 *)(lVar3 + 0x38) = DAT_09222198
                                                        ;
                                                        thunk_FUN_03f5d7b8((undefined8 *)
                                                                           (lVar3 + 0x38));
                                                        if (4 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x40) =
                                                               DAT_092179b0;
                                                          thunk_FUN_03f5d7b8();
                                                          *(long *)(lVar2 + 0x20) = lVar3;
                                                          thunk_FUN_03f5d7b8((long *)(lVar2 + 0x20),
                                                                             lVar3);
                                                          if (5 < *(uint *)(lVar1 + 0x18)) {
                                                            *(long *)(lVar1 + 0x48) = lVar2;
                                                            thunk_FUN_03f5d7b8((long *)(lVar1 + 0x48
                                                                                       ),lVar2);
                                                            lVar2 = thunk_FUN_03f9944c(DAT_091938b0)
                                                            ;
                                                            System_Object___ctor(lVar2,0);
                                                            if (lVar2 != 0) {
                                                              *(undefined8 *)(lVar2 + 0x10) =
                                                                   DAT_09203968;
                                                              thunk_FUN_03f5d7b8();
                                                              lVar3 = FUN_03f5c394(DAT_091807b0,1);
                                                              if (lVar3 != 0) {
                                                                if (*(int *)(lVar3 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar3 + 0x20) =
                                                                       0x3a9;
                                                                  *(long *)(lVar2 + 0x18) = lVar3;
                                                                  thunk_FUN_03f5d7b8();
                                                                  lVar3 = FUN_03f5c394(DAT_091805f8,
                                                                                       7);
                                                                  if (lVar3 == 0) goto LAB_07769b4c;
                                                                  if (*(int *)(lVar3 + 0x18) != 0) {
                                                                    *(undefined8 *)(lVar3 + 0x20) =
                                                                         DAT_0920c0e0;
                                                                    thunk_FUN_03f5d7b8((undefined8 *
                                                                                       )(lVar3 + 
                                                  0x20));
                                                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar3 + 0x28) = DAT_09209058;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28))
                                                    ;
                                                    if (2 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x30) = DAT_0920c2d8;
                                                      thunk_FUN_03f5d7b8((undefined8 *)
                                                                         (lVar3 + 0x30));
                                                      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) !=
                                                          0) {
                                                        *(undefined8 *)(lVar3 + 0x38) = DAT_0920c2e0
                                                        ;
                                                        thunk_FUN_03f5d7b8((undefined8 *)
                                                                           (lVar3 + 0x38));
                                                        if (4 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x40) =
                                                               DAT_09203e58;
                                                          thunk_FUN_03f5d7b8((undefined8 *)
                                                                             (lVar3 + 0x40));
                                                          if (5 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x48) =
                                                                 DAT_09222198;
                                                            thunk_FUN_03f5d7b8((undefined8 *)
                                                                               (lVar3 + 0x48));
                                                            if (6 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x50) =
                                                                   DAT_092179b0;
                                                              thunk_FUN_03f5d7b8();
                                                              *(long *)(lVar2 + 0x20) = lVar3;
                                                              thunk_FUN_03f5d7b8((long *)(lVar2 + 
                                                  0x20),lVar3);
                                                  if (6 < *(uint *)(lVar1 + 0x18)) {
                                                    *(long *)(lVar1 + 0x50) = lVar2;
                                                    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x50),lVar2)
                                                    ;
                                                    lVar2 = thunk_FUN_03f9944c(DAT_091938b0);
                                                    System_Object___ctor(lVar2,0);
                                                    if (lVar2 != 0) {
                                                      *(undefined8 *)(lVar2 + 0x10) = DAT_0920de88;
                                                      thunk_FUN_03f5d7b8();
                                                      lVar3 = FUN_03f5c394(DAT_091807b0,1);
                                                      if (lVar3 != 0) {
                                                        if (*(int *)(lVar3 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar3 + 0x20) = 0x2605;
                                                          *(long *)(lVar2 + 0x18) = lVar3;
                                                          thunk_FUN_03f5d7b8();
                                                          lVar3 = FUN_03f5c394(DAT_091805f8,6);
                                                          if (lVar3 == 0) goto LAB_07769b4c;
                                                          if (*(int *)(lVar3 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar3 + 0x20) =
                                                                 DAT_092090a0;
                                                            thunk_FUN_03f5d7b8((undefined8 *)
                                                                               (lVar3 + 0x20));
                                                            if ((*(uint *)(lVar3 + 0x18) &
                                                                0xfffffffe) != 0) {
                                                              *(undefined8 *)(lVar3 + 0x28) =
                                                                   DAT_09209098;
                                                              thunk_FUN_03f5d7b8((undefined8 *)
                                                                                 (lVar3 + 0x28));
                                                              if (2 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x30) =
                                                                     DAT_091fbcb8;
                                                                thunk_FUN_03f5d7b8((undefined8 *)
                                                                                   (lVar3 + 0x30));
                                                                if ((*(uint *)(lVar3 + 0x18) &
                                                                    0xfffffffc) != 0) {
                                                                  *(undefined8 *)(lVar3 + 0x38) =
                                                                       DAT_092221a0;
                                                                  thunk_FUN_03f5d7b8((undefined8 *)
                                                                                     (lVar3 + 0x38))
                                                                  ;
                                                                  if (4 < *(uint *)(lVar3 + 0x18)) {
                                                                    *(undefined8 *)(lVar3 + 0x40) =
                                                                         DAT_0920c2d8;
                                                                    thunk_FUN_03f5d7b8((undefined8 *
                                                                                       )(lVar3 + 
                                                  0x40));
                                                  if (5 < *(uint *)(lVar3 + 0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x48) = DAT_09222198;
                                                    thunk_FUN_03f5d7b8();
                                                    *(long *)(lVar2 + 0x20) = lVar3;
                                                    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x20),lVar3)
                                                    ;
                                                    if ((*(uint *)(lVar1 + 0x18) & 0xfffffff8) != 0)
                                                    {
                                                      *(long *)(lVar1 + 0x58) = lVar2;
                                                      thunk_FUN_03f5d7b8((long *)(lVar1 + 0x58),
                                                                         lVar2);
                                                      **(long **)(DAT_09189998 + 0xb8) = lVar1;
                                                      thunk_FUN_03f5d7b8(*(undefined8 *)
                                                                          (DAT_09189998 + 0xb8),
                                                                         lVar1);
                                                      lVar1 = FUN_03f5c394(DAT_091805f8,9);
                                                      if (lVar1 == 0) goto LAB_07769b4c;
                                                      if (*(int *)(lVar1 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar1 + 0x20) = DAT_0920cbe8
                                                        ;
                                                        thunk_FUN_03f5d7b8((undefined8 *)
                                                                           (lVar1 + 0x20));
                                                        if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe)
                                                            != 0) {
                                                          *(undefined8 *)(lVar1 + 0x28) =
                                                               DAT_092080e8;
                                                          thunk_FUN_03f5d7b8((undefined8 *)
                                                                             (lVar1 + 0x28));
                                                          if (2 < *(uint *)(lVar1 + 0x18)) {
                                                            *(undefined8 *)(lVar1 + 0x30) =
                                                                 DAT_09210550;
                                                            thunk_FUN_03f5d7b8((undefined8 *)
                                                                               (lVar1 + 0x30));
                                                            if ((*(uint *)(lVar1 + 0x18) &
                                                                0xfffffffc) != 0) {
                                                              *(undefined8 *)(lVar1 + 0x38) =
                                                                   DAT_09206d48;
                                                              thunk_FUN_03f5d7b8((undefined8 *)
                                                                                 (lVar1 + 0x38));
                                                              if (4 < *(uint *)(lVar1 + 0x18)) {
                                                                *(undefined8 *)(lVar1 + 0x40) =
                                                                     DAT_092061e8;
                                                                thunk_FUN_03f5d7b8((undefined8 *)
                                                                                   (lVar1 + 0x40));
                                                                if (5 < *(uint *)(lVar1 + 0x18)) {
                                                                  *(undefined8 *)(lVar1 + 0x48) =
                                                                       DAT_092095c0;
                                                                  thunk_FUN_03f5d7b8((undefined8 *)
                                                                                     (lVar1 + 0x48))
                                                                  ;
                                                                  if (6 < *(uint *)(lVar1 + 0x18)) {
                                                                    *(undefined8 *)(lVar1 + 0x50) =
                                                                         DAT_09201288;
                                                                    thunk_FUN_03f5d7b8((undefined8 *
                                                                                       )(lVar1 + 
                                                  0x50));
                                                  if ((*(uint *)(lVar1 + 0x18) & 0xfffffff8) != 0) {
                                                    *(undefined8 *)(lVar1 + 0x58) = DAT_091febb8;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x58))
                                                    ;
                                                    if (8 < *(uint *)(lVar1 + 0x18)) {
                                                      *(undefined8 *)(lVar1 + 0x60) = DAT_091fcc20;
                                                      thunk_FUN_03f5d7b8();
                                                      plVar4 = (long *)(*(long *)(DAT_09189998 +
                                                                                 0xb8) + 8);
                                                      *plVar4 = lVar1;
                                                      thunk_FUN_03f5d7b8(plVar4,lVar1);
                                                      lVar1 = FUN_03f5c394(DAT_091805f8,4);
                                                      if (lVar1 == 0) goto LAB_07769b4c;
                                                      if (*(int *)(lVar1 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar1 + 0x20) = DAT_091f93e0
                                                        ;
                                                        thunk_FUN_03f5d7b8((undefined8 *)
                                                                           (lVar1 + 0x20));
                                                        if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe)
                                                            != 0) {
                                                          *(undefined8 *)(lVar1 + 0x28) =
                                                               DAT_091f9398;
                                                          thunk_FUN_03f5d7b8((undefined8 *)
                                                                             (lVar1 + 0x28));
                                                          if (2 < *(uint *)(lVar1 + 0x18)) {
                                                            *(undefined8 *)(lVar1 + 0x30) =
                                                                 DAT_091f93d8;
                                                            thunk_FUN_03f5d7b8((undefined8 *)
                                                                               (lVar1 + 0x30));
                                                            if ((*(uint *)(lVar1 + 0x18) &
                                                                0xfffffffc) != 0) {
                                                              *(undefined8 *)(lVar1 + 0x38) =
                                                                   DAT_091f9390;
                                                              thunk_FUN_03f5d7b8();
                                                              plVar4 = (long *)(*(long *)(
                                                  DAT_09189998 + 0xb8) + 0x10);
                                                  *plVar4 = lVar1;
                                                  thunk_FUN_03f5d7b8(plVar4,lVar1);
                                                  uVar5 = thunk_FUN_03f9944c(DAT_0917cd90);
                                                  FUN_057e0400(uVar5,DAT_091b09b8);
                                                  puVar6 = (undefined8 *)
                                                           (*(long *)(DAT_09189998 + 0xb8) + 0x18);
                                                  *puVar6 = uVar5;
                                                  thunk_FUN_03f5d7b8(puVar6,uVar5);
                                                  uVar5 = thunk_FUN_03f9944c(DAT_0917cd90);
                                                  FUN_057e0400(uVar5,DAT_091b09b8);
                                                  puVar6 = (undefined8 *)
                                                           (*(long *)(DAT_09189998 + 0xb8) + 0x20);
                                                  *puVar6 = uVar5;
                                                  thunk_FUN_03f5d7b8(puVar6,uVar5);
                                                  uVar5 = thunk_FUN_03f9944c(DAT_0917b9d8);
                                                  FUN_0564e1ec(uVar5,DAT_091aa508);
                                                  puVar6 = (undefined8 *)
                                                           (*(long *)(DAT_09189998 + 0xb8) + 0x28);
                                                  *puVar6 = uVar5;
                                                  thunk_FUN_03f5d7b8(puVar6,uVar5);
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto LAB_07769b48;
                                                  }
                                                  }
                                                  goto LAB_07769b4c;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto LAB_07769b48;
                                                  }
                                                  }
                                                  goto LAB_07769b4c;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto LAB_07769b48;
                                                  }
                                                  }
                                                  goto LAB_07769b4c;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto LAB_07769b48;
                                                  }
                                                  }
                                                  goto LAB_07769b4c;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto LAB_07769b48;
                                                  }
                                                  }
                                                  goto LAB_07769b4c;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto LAB_07769b48;
                                                  }
                                                  }
                                                  goto LAB_07769b4c;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                                goto LAB_07769b48;
                                              }
                                            }
                                          }
                                          goto LAB_07769b4c;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_07769b48:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_07769b4c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

