// rea decompile_all
// name: System.Globalization.CalendarData$$.cctor
// address: 0x752de8c
// body: available
// range: 0x752de8c-0x752f07f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x752f074 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x752f078 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x752f07c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_CalendarData___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if ((DAT_0952184e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091822a0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09211078);
    FUN_03f5c2a4(&DAT_09226bf0);
    FUN_03f5c2a4(&DAT_09226c18);
    FUN_03f5c2a4(&DAT_09206368);
    FUN_03f5c2a4(&DAT_09206360);
    FUN_03f5c2a4(&DAT_09211088);
    FUN_03f5c2a4(&DAT_09202860);
    FUN_03f5c2a4(&DAT_092039a0);
    FUN_03f5c2a4(&DAT_0920c660);
    FUN_03f5c2a4(&DAT_092108e0);
    FUN_03f5c2a4(&DAT_09207760);
    FUN_03f5c2a4(&DAT_092090d0);
    FUN_03f5c2a4(&DAT_09202f30);
    FUN_03f5c2a4(&DAT_09226bb0);
    FUN_03f5c2a4(&DAT_09207748);
    FUN_03f5c2a4(&DAT_09206400);
    FUN_03f5c2a4(&DAT_0920cad8);
    FUN_03f5c2a4(&DAT_092090b8);
    FUN_03f5c2a4(&DAT_0920c708);
    FUN_03f5c2a4(&DAT_091fc458);
    FUN_03f5c2a4(&DAT_092063f0);
    FUN_03f5c2a4(&DAT_09202f38);
    FUN_03f5c2a4(&DAT_09226bc8);
    FUN_03f5c2a4(&DAT_09208038);
    FUN_03f5c2a4(&DAT_09226c00);
    FUN_03f5c2a4(&DAT_091fb0b8);
    FUN_03f5c2a4(&DAT_092063e8);
    FUN_03f5c2a4(&DAT_0920ddf8);
    FUN_03f5c2a4(&DAT_09225d80);
    FUN_03f5c2a4(&DAT_092131d0);
    FUN_03f5c2a4(&DAT_09200440);
    FUN_03f5c2a4(&DAT_09226c10);
    FUN_03f5c2a4(&DAT_0920eab0);
    FUN_03f5c2a4(&DAT_091fc450);
    FUN_03f5c2a4(&DAT_09213220);
    FUN_03f5c2a4(&DAT_09209690);
    FUN_03f5c2a4(&DAT_09202868);
    FUN_03f5c2a4(&DAT_09226c08);
    FUN_03f5c2a4(&DAT_09207990);
    FUN_03f5c2a4(&DAT_09225d30);
    FUN_03f5c2a4(&DAT_092108d8);
    FUN_03f5c2a4(&DAT_09226bd8);
    FUN_03f5c2a4(&DAT_0920c720);
    FUN_03f5c2a4(&DAT_09226be0);
    FUN_03f5c2a4(&DAT_0921a330);
    FUN_03f5c2a4(&DAT_091fbd20);
    FUN_03f5c2a4(&DAT_09226bb8);
    FUN_03f5c2a4(&DAT_09206408);
    FUN_03f5c2a4(&DAT_09200370);
    FUN_03f5c2a4(&DAT_091fbd18);
    FUN_03f5c2a4(&DAT_09209688);
    FUN_03f5c2a4(&DAT_09213228);
    FUN_03f5c2a4(&DAT_09226bd0);
    FUN_03f5c2a4(&DAT_0920dd10);
    FUN_03f5c2a4(&DAT_092080c0);
    FUN_03f5c2a4(&DAT_09226bc0);
    FUN_03f5c2a4(&DAT_092073c0);
    FUN_03f5c2a4(&DAT_0920ddf0);
    FUN_03f5c2a4(&DAT_09211080);
    FUN_03f5c2a4(&DAT_09226bf8);
    FUN_03f5c2a4(&DAT_09202e58);
    FUN_03f5c2a4(&DAT_09226be8);
    FUN_03f5c2a4(&DAT_091fb0e8);
    FUN_03f5c2a4(&DAT_0920cae8);
    FUN_03f5c2a4(&DAT_092080c8);
    FUN_03f5c2a4(&DAT_092073f0);
    DAT_0952184e = 1;
  }
  lVar2 = FUN_03f5c394(DAT_091805f8,0xd);
  if (lVar2 == 0) goto LAB_0752f07c;
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = DAT_09226c18;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x20));
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar2 + 0x28) = DAT_09226be0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x28));
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = DAT_09226bf0;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x30));
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar2 + 0x38) = DAT_09226be8;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x38));
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) = DAT_09226c08;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x40));
            if (5 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x48) = DAT_09226bb8;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x48));
              if (6 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x50) = DAT_09226bc8;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x50));
                if ((*(uint *)(lVar2 + 0x18) & 0xfffffff8) != 0) {
                  *(undefined8 *)(lVar2 + 0x58) = DAT_09226bf8;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x58));
                  if (8 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x60) = DAT_09226bd0;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x60));
                    if (9 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x68) = DAT_09226c00;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x68));
                      if (10 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x70) = DAT_09226c10;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x70));
                        if (0xb < *(uint *)(lVar2 + 0x18)) {
                          *(undefined8 *)(lVar2 + 0x78) = DAT_09226bb0;
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x78));
                          if (0xc < *(uint *)(lVar2 + 0x18)) {
                            *(undefined8 *)(lVar2 + 0x80) = DAT_09226bd8;
                            thunk_FUN_03f5d7b8();
                            plVar3 = (long *)(*(long *)(DAT_091822a0 + 0xb8) + 8);
                            *plVar3 = lVar2;
                            thunk_FUN_03f5d7b8(plVar3,lVar2);
                            lVar2 = FUN_03f5c394(DAT_091805f8,0xd);
                            if (lVar2 == 0) goto LAB_0752f07c;
                            if (*(int *)(lVar2 + 0x18) != 0) {
                              *(undefined8 *)(lVar2 + 0x20) = DAT_09226c18;
                              thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x20));
                              if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
                                *(undefined8 *)(lVar2 + 0x28) = DAT_09226be0;
                                thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x28));
                                if (2 < *(uint *)(lVar2 + 0x18)) {
                                  *(undefined8 *)(lVar2 + 0x30) = DAT_09226bf0;
                                  thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x30));
                                  if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
                                    *(undefined8 *)(lVar2 + 0x38) = DAT_09226be8;
                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x38));
                                    if (4 < *(uint *)(lVar2 + 0x18)) {
                                      *(undefined8 *)(lVar2 + 0x40) = DAT_09226c08;
                                      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x40));
                                      if (5 < *(uint *)(lVar2 + 0x18)) {
                                        *(undefined8 *)(lVar2 + 0x48) = DAT_09226bc0;
                                        thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x48));
                                        if (6 < *(uint *)(lVar2 + 0x18)) {
                                          *(undefined8 *)(lVar2 + 0x50) = DAT_09226bc8;
                                          thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x50));
                                          if ((*(uint *)(lVar2 + 0x18) & 0xfffffff8) != 0) {
                                            *(undefined8 *)(lVar2 + 0x58) = DAT_09226bf8;
                                            thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x58));
                                            if (8 < *(uint *)(lVar2 + 0x18)) {
                                              *(undefined8 *)(lVar2 + 0x60) = DAT_09226bd0;
                                              thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x60));
                                              if (9 < *(uint *)(lVar2 + 0x18)) {
                                                *(undefined8 *)(lVar2 + 0x68) = DAT_09226c00;
                                                thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x68));
                                                if (10 < *(uint *)(lVar2 + 0x18)) {
                                                  *(undefined8 *)(lVar2 + 0x70) = DAT_09226c10;
                                                  thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x70));
                                                  if (0xb < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x78) = DAT_09226bb0;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x78))
                                                    ;
                                                    if (0xc < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x80) = DAT_09226bd8;
                                                      thunk_FUN_03f5d7b8();
                                                      plVar3 = (long *)(*(long *)(DAT_091822a0 +
                                                                                 0xb8) + 0x10);
                                                      *plVar3 = lVar2;
                                                      thunk_FUN_03f5d7b8(plVar3,lVar2);
                                                      lVar2 = thunk_FUN_03f9944c(DAT_091822a0);
                                                      *(undefined4 *)(lVar2 + 0x90) = 0x7ed;
                                                      System_Object___ctor(lVar2,0);
                                                      *(undefined8 *)(lVar2 + 0x10) = DAT_092039a0;
                                                      thunk_FUN_03f5d7b8();
                                                      uVar1 = DAT_091805f8;
                                                      *(undefined8 *)(lVar2 + 0x90) = 0x1000007ed;
                                                      lVar4 = FUN_03f5c394(uVar1,2);
                                                      if (lVar4 == 0) goto LAB_0752f07c;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) = DAT_092073c0
                                                        ;
                                                        thunk_FUN_03f5d7b8((undefined8 *)
                                                                           (lVar4 + 0x20));
                                                        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe)
                                                            != 0) {
                                                          *(undefined8 *)(lVar4 + 0x28) =
                                                               DAT_09225d80;
                                                          thunk_FUN_03f5d7b8();
                                                          *(long *)(lVar2 + 0x18) = lVar4;
                                                          thunk_FUN_03f5d7b8((long *)(lVar2 + 0x18),
                                                                             lVar4);
                                                          lVar4 = FUN_03f5c394(DAT_091805f8,1);
                                                          if (lVar4 == 0) {
LAB_0752f07c:
                    /* WARNING: Subroutine does not return */
                                                            FUN_03f5c550();
                                                          }
                                                          if (*(int *)(lVar4 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar4 + 0x20) =
                                                                 DAT_0921a330;
                                                            thunk_FUN_03f5d7b8();
                                                            *(long *)(lVar2 + 0x28) = lVar4;
                                                            thunk_FUN_03f5d7b8((long *)(lVar2 + 0x28
                                                                                       ),lVar4);
                                                            lVar4 = FUN_03f5c394(DAT_091805f8,1);
                                                            if (lVar4 == 0) goto LAB_0752f07c;
                                                            if (*(int *)(lVar4 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar4 + 0x20) =
                                                                   DAT_09225d30;
                                                              thunk_FUN_03f5d7b8();
                                                              *(long *)(lVar2 + 0x20) = lVar4;
                                                              thunk_FUN_03f5d7b8((long *)(lVar2 + 
                                                  0x20),lVar4);
                                                  *(undefined8 *)(lVar2 + 0x30) = DAT_092073f0;
                                                  thunk_FUN_03f5d7b8();
                                                  lVar4 = FUN_03f5c394(DAT_091805f8,1);
                                                  if (lVar4 == 0) goto LAB_0752f07c;
                                                  if (*(int *)(lVar4 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar4 + 0x20) = DAT_091fb0b8;
                                                    thunk_FUN_03f5d7b8();
                                                    *(long *)(lVar2 + 0x38) = lVar4;
                                                    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x38),lVar4)
                                                    ;
                                                    lVar4 = FUN_03f5c394(DAT_091805f8,1);
                                                    if (lVar4 == 0) goto LAB_0752f07c;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) = DAT_091fb0e8;
                                                      thunk_FUN_03f5d7b8();
                                                      *(long *)(lVar2 + 0x40) = lVar4;
                                                      thunk_FUN_03f5d7b8((long *)(lVar2 + 0x40),
                                                                         lVar4);
                                                      lVar4 = FUN_03f5c394(DAT_091805f8,1);
                                                      if (lVar4 == 0) goto LAB_0752f07c;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) = DAT_091fb0e8
                                                        ;
                                                        thunk_FUN_03f5d7b8();
                                                        *(long *)(lVar2 + 0x48) = lVar4;
                                                        thunk_FUN_03f5d7b8((long *)(lVar2 + 0x48),
                                                                           lVar4);
                                                        lVar4 = FUN_03f5c394(DAT_091805f8,7);
                                                        if (lVar4 == 0) goto LAB_0752f07c;
                                                        if (*(int *)(lVar4 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar4 + 0x20) =
                                                               DAT_0920ddf8;
                                                          thunk_FUN_03f5d7b8((undefined8 *)
                                                                             (lVar4 + 0x20));
                                                          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe)
                                                              != 0) {
                                                            *(undefined8 *)(lVar4 + 0x28) =
                                                                 DAT_092080c8;
                                                            thunk_FUN_03f5d7b8((undefined8 *)
                                                                               (lVar4 + 0x28));
                                                            if (2 < *(uint *)(lVar4 + 0x18)) {
                                                              *(undefined8 *)(lVar4 + 0x30) =
                                                                   DAT_09211088;
                                                              thunk_FUN_03f5d7b8((undefined8 *)
                                                                                 (lVar4 + 0x30));
                                                              if ((*(uint *)(lVar4 + 0x18) &
                                                                  0xfffffffc) != 0) {
                                                                *(undefined8 *)(lVar4 + 0x38) =
                                                                     DAT_09213228;
                                                                thunk_FUN_03f5d7b8((undefined8 *)
                                                                                   (lVar4 + 0x38));
                                                                if (4 < *(uint *)(lVar4 + 0x18)) {
                                                                  *(undefined8 *)(lVar4 + 0x40) =
                                                                       DAT_092108e0;
                                                                  thunk_FUN_03f5d7b8((undefined8 *)
                                                                                     (lVar4 + 0x40))
                                                                  ;
                                                                  if (5 < *(uint *)(lVar4 + 0x18)) {
                                                                    *(undefined8 *)(lVar4 + 0x48) =
                                                                         DAT_09202f38;
                                                                    thunk_FUN_03f5d7b8((undefined8 *
                                                                                       )(lVar4 + 
                                                  0x48));
                                                  if (6 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x50) = DAT_0920c720;
                                                    thunk_FUN_03f5d7b8();
                                                    *(long *)(lVar2 + 0x50) = lVar4;
                                                    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x50),lVar4)
                                                    ;
                                                    lVar4 = FUN_03f5c394(DAT_091805f8,7);
                                                    if (lVar4 == 0) goto LAB_0752f07c;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) = DAT_0920ddf0;
                                                      thunk_FUN_03f5d7b8((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) !=
                                                          0) {
                                                        *(undefined8 *)(lVar4 + 0x28) = DAT_092080c0
                                                        ;
                                                        thunk_FUN_03f5d7b8((undefined8 *)
                                                                           (lVar4 + 0x28));
                                                        if (2 < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x30) =
                                                               DAT_09211080;
                                                          thunk_FUN_03f5d7b8((undefined8 *)
                                                                             (lVar4 + 0x30));
                                                          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc)
                                                              != 0) {
                                                            *(undefined8 *)(lVar4 + 0x38) =
                                                                 DAT_09213220;
                                                            thunk_FUN_03f5d7b8((undefined8 *)
                                                                               (lVar4 + 0x38));
                                                            if (4 < *(uint *)(lVar4 + 0x18)) {
                                                              *(undefined8 *)(lVar4 + 0x40) =
                                                                   DAT_092108d8;
                                                              thunk_FUN_03f5d7b8((undefined8 *)
                                                                                 (lVar4 + 0x40));
                                                              if (5 < *(uint *)(lVar4 + 0x18)) {
                                                                *(undefined8 *)(lVar4 + 0x48) =
                                                                     DAT_09202f30;
                                                                thunk_FUN_03f5d7b8((undefined8 *)
                                                                                   (lVar4 + 0x48));
                                                                if (6 < *(uint *)(lVar4 + 0x18)) {
                                                                  *(undefined8 *)(lVar4 + 0x50) =
                                                                       DAT_0920c708;
                                                                  thunk_FUN_03f5d7b8();
                                                                  *(long *)(lVar2 + 0x58) = lVar4;
                                                                  thunk_FUN_03f5d7b8((long *)(lVar2 
                                                  + 0x58),lVar4);
                                                  lVar4 = FUN_03f5c394(DAT_091805f8,7);
                                                  if (lVar4 == 0) goto LAB_0752f07c;
                                                  if (*(int *)(lVar4 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar4 + 0x20) = DAT_0920dd10;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0)
                                                    {
                                                      *(undefined8 *)(lVar4 + 0x28) = DAT_09208038;
                                                      thunk_FUN_03f5d7b8((undefined8 *)
                                                                         (lVar4 + 0x28));
                                                      if (2 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x30) = DAT_09211078
                                                        ;
                                                        thunk_FUN_03f5d7b8((undefined8 *)
                                                                           (lVar4 + 0x30));
                                                        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc)
                                                            != 0) {
                                                          *(undefined8 *)(lVar4 + 0x38) =
                                                               DAT_092131d0;
                                                          thunk_FUN_03f5d7b8((undefined8 *)
                                                                             (lVar4 + 0x38));
                                                          if (4 < *(uint *)(lVar4 + 0x18)) {
                                                            *(undefined8 *)(lVar4 + 0x40) =
                                                                 DAT_0920eab0;
                                                            thunk_FUN_03f5d7b8((undefined8 *)
                                                                               (lVar4 + 0x40));
                                                            if (5 < *(uint *)(lVar4 + 0x18)) {
                                                              *(undefined8 *)(lVar4 + 0x48) =
                                                                   DAT_09202e58;
                                                              thunk_FUN_03f5d7b8((undefined8 *)
                                                                                 (lVar4 + 0x48));
                                                              if (6 < *(uint *)(lVar4 + 0x18)) {
                                                                *(undefined8 *)(lVar4 + 0x50) =
                                                                     DAT_0920c660;
                                                                thunk_FUN_03f5d7b8();
                                                                *(long *)(lVar2 + 0x60) = lVar4;
                                                                thunk_FUN_03f5d7b8((long *)(lVar2 + 
                                                  0x60),lVar4);
                                                  lVar4 = FUN_03f5c394(DAT_091805f8,0xd);
                                                  if (lVar4 == 0) goto LAB_0752f07c;
                                                  if (*(int *)(lVar4 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar4 + 0x20) = DAT_09206368;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0)
                                                    {
                                                      *(undefined8 *)(lVar4 + 0x28) = DAT_09202868;
                                                      thunk_FUN_03f5d7b8((undefined8 *)
                                                                         (lVar4 + 0x28));
                                                      if (2 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x30) = DAT_09207760
                                                        ;
                                                        thunk_FUN_03f5d7b8((undefined8 *)
                                                                           (lVar4 + 0x30));
                                                        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc)
                                                            != 0) {
                                                          *(undefined8 *)(lVar4 + 0x38) =
                                                               DAT_091fbd20;
                                                          thunk_FUN_03f5d7b8((undefined8 *)
                                                                             (lVar4 + 0x38));
                                                          if (4 < *(uint *)(lVar4 + 0x18)) {
                                                            *(undefined8 *)(lVar4 + 0x40) =
                                                                 DAT_09207990;
                                                            thunk_FUN_03f5d7b8((undefined8 *)
                                                                               (lVar4 + 0x40));
                                                            if (5 < *(uint *)(lVar4 + 0x18)) {
                                                              *(undefined8 *)(lVar4 + 0x48) =
                                                                   DAT_09206408;
                                                              thunk_FUN_03f5d7b8((undefined8 *)
                                                                                 (lVar4 + 0x48));
                                                              if (6 < *(uint *)(lVar4 + 0x18)) {
                                                                *(undefined8 *)(lVar4 + 0x50) =
                                                                     DAT_092063f0;
                                                                thunk_FUN_03f5d7b8((undefined8 *)
                                                                                   (lVar4 + 0x50));
                                                                if ((*(uint *)(lVar4 + 0x18) &
                                                                    0xfffffff8) != 0) {
                                                                  *(undefined8 *)(lVar4 + 0x58) =
                                                                       DAT_091fc458;
                                                                  thunk_FUN_03f5d7b8((undefined8 *)
                                                                                     (lVar4 + 0x58))
                                                                  ;
                                                                  if (8 < *(uint *)(lVar4 + 0x18)) {
                                                                    *(undefined8 *)(lVar4 + 0x60) =
                                                                         DAT_0920cae8;
                                                                    thunk_FUN_03f5d7b8((undefined8 *
                                                                                       )(lVar4 + 
                                                  0x60));
                                                  if (9 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x68) = DAT_09209690;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x68))
                                                    ;
                                                    if (10 < *(uint *)(lVar4 + 0x18)) {
                                                      *(undefined8 *)(lVar4 + 0x70) = DAT_092090d0;
                                                      thunk_FUN_03f5d7b8((undefined8 *)
                                                                         (lVar4 + 0x70));
                                                      if (0xb < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x78) = DAT_09200440
                                                        ;
                                                        thunk_FUN_03f5d7b8((undefined8 *)
                                                                           (lVar4 + 0x78));
                                                        if (0xc < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x80) =
                                                               **(undefined8 **)
                                                                 (DAT_09535468 + 0xb8);
                                                          thunk_FUN_03f5d7b8();
                                                          *(long *)(lVar2 + 0x68) = lVar4;
                                                          thunk_FUN_03f5d7b8((long *)(lVar2 + 0x68),
                                                                             lVar4);
                                                          lVar4 = FUN_03f5c394(DAT_091805f8,0xd);
                                                          if (lVar4 == 0) goto LAB_0752f07c;
                                                          if (*(int *)(lVar4 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar4 + 0x20) =
                                                                 DAT_09206360;
                                                            thunk_FUN_03f5d7b8((undefined8 *)
                                                                               (lVar4 + 0x20));
                                                            if ((*(uint *)(lVar4 + 0x18) &
                                                                0xfffffffe) != 0) {
                                                              *(undefined8 *)(lVar4 + 0x28) =
                                                                   DAT_09202860;
                                                              thunk_FUN_03f5d7b8((undefined8 *)
                                                                                 (lVar4 + 0x28));
                                                              if (2 < *(uint *)(lVar4 + 0x18)) {
                                                                *(undefined8 *)(lVar4 + 0x30) =
                                                                     DAT_09207748;
                                                                thunk_FUN_03f5d7b8((undefined8 *)
                                                                                   (lVar4 + 0x30));
                                                                if ((*(uint *)(lVar4 + 0x18) &
                                                                    0xfffffffc) != 0) {
                                                                  *(undefined8 *)(lVar4 + 0x38) =
                                                                       DAT_091fbd18;
                                                                  thunk_FUN_03f5d7b8((undefined8 *)
                                                                                     (lVar4 + 0x38))
                                                                  ;
                                                                  if (4 < *(uint *)(lVar4 + 0x18)) {
                                                                    *(undefined8 *)(lVar4 + 0x40) =
                                                                         DAT_09207990;
                                                                    thunk_FUN_03f5d7b8((undefined8 *
                                                                                       )(lVar4 + 
                                                  0x40));
                                                  if (5 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x48) = DAT_09206400;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x48))
                                                    ;
                                                    if (6 < *(uint *)(lVar4 + 0x18)) {
                                                      *(undefined8 *)(lVar4 + 0x50) = DAT_092063e8;
                                                      thunk_FUN_03f5d7b8((undefined8 *)
                                                                         (lVar4 + 0x50));
                                                      if ((*(uint *)(lVar4 + 0x18) & 0xfffffff8) !=
                                                          0) {
                                                        *(undefined8 *)(lVar4 + 0x58) = DAT_091fc450
                                                        ;
                                                        thunk_FUN_03f5d7b8((undefined8 *)
                                                                           (lVar4 + 0x58));
                                                        if (8 < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x60) =
                                                               DAT_0920cad8;
                                                          thunk_FUN_03f5d7b8((undefined8 *)
                                                                             (lVar4 + 0x60));
                                                          if (9 < *(uint *)(lVar4 + 0x18)) {
                                                            *(undefined8 *)(lVar4 + 0x68) =
                                                                 DAT_09209688;
                                                            thunk_FUN_03f5d7b8((undefined8 *)
                                                                               (lVar4 + 0x68));
                                                            if (10 < *(uint *)(lVar4 + 0x18)) {
                                                              *(undefined8 *)(lVar4 + 0x70) =
                                                                   DAT_092090b8;
                                                              thunk_FUN_03f5d7b8((undefined8 *)
                                                                                 (lVar4 + 0x70));
                                                              if (0xb < *(uint *)(lVar4 + 0x18)) {
                                                                *(undefined8 *)(lVar4 + 0x78) =
                                                                     DAT_09200370;
                                                                thunk_FUN_03f5d7b8((undefined8 *)
                                                                                   (lVar4 + 0x78));
                                                                if (0xc < *(uint *)(lVar4 + 0x18)) {
                                                                  *(undefined8 *)(lVar4 + 0x80) =
                                                                       **(undefined8 **)
                                                                         (DAT_09535468 + 0xb8);
                                                                  thunk_FUN_03f5d7b8();
                                                                  plVar3 = (long *)(lVar2 + 0x70);
                                                                  *plVar3 = lVar4;
                                                                  thunk_FUN_03f5d7b8(plVar3,lVar4);
                                                                  *(undefined8 *)(lVar2 + 0x78) =
                                                                       *(undefined8 *)(lVar2 + 0x68)
                                                                  ;
                                                                  thunk_FUN_03f5d7b8();
                                                                  *(long *)(lVar2 + 0x80) = *plVar3;
                                                                  thunk_FUN_03f5d7b8();
                                                                  *(undefined8 *)(lVar2 + 0x88) =
                                                                       *(undefined8 *)(lVar2 + 0x68)
                                                                  ;
                                                                  thunk_FUN_03f5d7b8();
                                                                  lVar4 = DAT_091822a0;
                                                                  *(undefined1 *)(lVar2 + 0x98) = 0;
                                                                  **(long **)(lVar4 + 0xb8) = lVar2;
                                                                  thunk_FUN_03f5d7b8(*(undefined8 *)
                                                                                      (DAT_091822a0
                                                                                      + 0xb8),lVar2)
                                                                  ;
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
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

