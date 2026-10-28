// rea decompile_all
// name: CakeOrder.Localization.ArabicShaper$$.cctor
// address: 0x42e19c0
// body: available
// range: 0x42e19c0-0x42e256f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e2564 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42e2568 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e256c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Localization_ArabicShaper___cctor(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((DAT_09517439 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181520);
    FUN_03f5c2a4(&DAT_0919c650);
    FUN_03f5c2a4(&DAT_0919c648);
    FUN_03f5c2a4(&DAT_09176080);
    FUN_03f5c2a4(&DAT_091f3850);
    FUN_03f5c2a4(&DAT_091f3860);
    FUN_03f5c2a4(&DAT_091f3870);
    FUN_03f5c2a4(&DAT_091f3878);
    FUN_03f5c2a4(&DAT_091f3888);
    FUN_03f5c2a4(&DAT_091f3898);
    FUN_03f5c2a4(&DAT_091f38a8);
    FUN_03f5c2a4(&DAT_091f38b8);
    FUN_03f5c2a4(&DAT_091f38c0);
    FUN_03f5c2a4(&DAT_091f38c8);
    FUN_03f5c2a4(&DAT_091f38d0);
    FUN_03f5c2a4(&DAT_091f38d8);
    FUN_03f5c2a4(&DAT_091f38e8);
    FUN_03f5c2a4(&DAT_091f38f0);
    FUN_03f5c2a4(&DAT_091f38f8);
    FUN_03f5c2a4(&DAT_091f3900);
    FUN_03f5c2a4(&DAT_091f3908);
    FUN_03f5c2a4(&DAT_091f3910);
    FUN_03f5c2a4(&DAT_091f3918);
    FUN_03f5c2a4(&DAT_091f3920);
    FUN_03f5c2a4(&DAT_091f3928);
    FUN_03f5c2a4(&DAT_091f3930);
    FUN_03f5c2a4(&DAT_091f3948);
    FUN_03f5c2a4(&DAT_091807a8);
    DAT_09517439 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09176080);
  FUN_06e76c94(lVar1,DAT_0919c648);
  lVar2 = FUN_03f5c394(DAT_091807a8,4);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) goto LAB_042e2568;
    *(undefined2 *)(lVar2 + 0x20) = 0xfe80;
    if (lVar1 != 0) {
      FUN_06e77a50(lVar1,0x621,lVar2,DAT_0919c650);
      lVar2 = FUN_03f5c394(DAT_091807a8,4);
      if (lVar2 != 0) {
        if ((*(int *)(lVar2 + 0x18) == 0) ||
           (*(undefined2 *)(lVar2 + 0x20) = 0xfe81, uVar3 = DAT_0919c650,
           *(int *)(lVar2 + 0x18) == 1)) {
LAB_042e2568:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined2 *)(lVar2 + 0x22) = 0xfe82;
        FUN_06e77a50(lVar1,0x622,lVar2,uVar3);
        lVar2 = FUN_03f5c394(DAT_091807a8,4);
        if (lVar2 != 0) {
          if ((*(int *)(lVar2 + 0x18) == 0) ||
             (*(undefined2 *)(lVar2 + 0x20) = 0xfe83, uVar3 = DAT_0919c650,
             *(int *)(lVar2 + 0x18) == 1)) goto LAB_042e2568;
          *(undefined2 *)(lVar2 + 0x22) = 0xfe84;
          FUN_06e77a50(lVar1,0x623,lVar2,uVar3);
          lVar2 = FUN_03f5c394(DAT_091807a8,4);
          if (lVar2 != 0) {
            if ((*(int *)(lVar2 + 0x18) == 0) ||
               (*(undefined2 *)(lVar2 + 0x20) = 0xfe85, uVar3 = DAT_0919c650,
               *(int *)(lVar2 + 0x18) == 1)) goto LAB_042e2568;
            *(undefined2 *)(lVar2 + 0x22) = 0xfe86;
            FUN_06e77a50(lVar1,0x624,lVar2,uVar3);
            lVar2 = FUN_03f5c394(DAT_091807a8,4);
            if (lVar2 != 0) {
              if ((*(int *)(lVar2 + 0x18) == 0) ||
                 (*(undefined2 *)(lVar2 + 0x20) = 0xfe87, uVar3 = DAT_0919c650,
                 *(int *)(lVar2 + 0x18) == 1)) goto LAB_042e2568;
              *(undefined2 *)(lVar2 + 0x22) = 0xfe88;
              FUN_06e77a50(lVar1,0x625,lVar2,uVar3);
              uVar3 = FUN_03f5c394(DAT_091807a8,4);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar3,DAT_091f38c0,0);
              FUN_06e77a50(lVar1,0x626,uVar3,DAT_0919c650);
              lVar2 = FUN_03f5c394(DAT_091807a8,4);
              if (lVar2 != 0) {
                if ((*(int *)(lVar2 + 0x18) == 0) ||
                   (*(undefined2 *)(lVar2 + 0x20) = 0xfe8d, uVar3 = DAT_0919c650,
                   *(int *)(lVar2 + 0x18) == 1)) goto LAB_042e2568;
                *(undefined2 *)(lVar2 + 0x22) = 0xfe8e;
                FUN_06e77a50(lVar1,0x627,lVar2,uVar3);
                uVar3 = FUN_03f5c394(DAT_091807a8,4);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          (uVar3,DAT_091f38b8,0);
                FUN_06e77a50(lVar1,0x628,uVar3,DAT_0919c650);
                lVar2 = FUN_03f5c394(DAT_091807a8,4);
                if (lVar2 != 0) {
                  if ((*(int *)(lVar2 + 0x18) == 0) ||
                     (*(undefined2 *)(lVar2 + 0x20) = 0xfe93, uVar3 = DAT_0919c650,
                     *(int *)(lVar2 + 0x18) == 1)) goto LAB_042e2568;
                  *(undefined2 *)(lVar2 + 0x22) = 0xfe94;
                  FUN_06e77a50(lVar1,0x629,lVar2,uVar3);
                  uVar3 = FUN_03f5c394(DAT_091807a8,4);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            (uVar3,DAT_091f3908,0);
                  FUN_06e77a50(lVar1,0x62a,uVar3,DAT_0919c650);
                  uVar3 = FUN_03f5c394(DAT_091807a8,4);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            (uVar3,DAT_091f38c8,0);
                  FUN_06e77a50(lVar1,0x62b,uVar3,DAT_0919c650);
                  uVar3 = FUN_03f5c394(DAT_091807a8,4);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            (uVar3,DAT_091f38a8,0);
                  FUN_06e77a50(lVar1,0x62c,uVar3,DAT_0919c650);
                  uVar3 = FUN_03f5c394(DAT_091807a8,4);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            (uVar3,DAT_091f3888,0);
                  FUN_06e77a50(lVar1,0x62d,uVar3,DAT_0919c650);
                  uVar3 = FUN_03f5c394(DAT_091807a8,4);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            (uVar3,DAT_091f38d8,0);
                  FUN_06e77a50(lVar1,0x62e,uVar3,DAT_0919c650);
                  lVar2 = FUN_03f5c394(DAT_091807a8,4);
                  if (lVar2 != 0) {
                    if ((*(int *)(lVar2 + 0x18) == 0) ||
                       (*(undefined2 *)(lVar2 + 0x20) = 0xfea9, uVar3 = DAT_0919c650,
                       *(int *)(lVar2 + 0x18) == 1)) goto LAB_042e2568;
                    *(undefined2 *)(lVar2 + 0x22) = 0xfeaa;
                    FUN_06e77a50(lVar1,0x62f,lVar2,uVar3);
                    lVar2 = FUN_03f5c394(DAT_091807a8,4);
                    if (lVar2 != 0) {
                      if ((*(int *)(lVar2 + 0x18) == 0) ||
                         (*(undefined2 *)(lVar2 + 0x20) = 0xfeab, uVar3 = DAT_0919c650,
                         *(int *)(lVar2 + 0x18) == 1)) goto LAB_042e2568;
                      *(undefined2 *)(lVar2 + 0x22) = 0xfeac;
                      FUN_06e77a50(lVar1,0x630,lVar2,uVar3);
                      lVar2 = FUN_03f5c394(DAT_091807a8,4);
                      if (lVar2 != 0) {
                        if ((*(int *)(lVar2 + 0x18) == 0) ||
                           (*(undefined2 *)(lVar2 + 0x20) = 0xfead, uVar3 = DAT_0919c650,
                           *(int *)(lVar2 + 0x18) == 1)) goto LAB_042e2568;
                        *(undefined2 *)(lVar2 + 0x22) = 0xfeae;
                        FUN_06e77a50(lVar1,0x631,lVar2,uVar3);
                        lVar2 = FUN_03f5c394(DAT_091807a8,4);
                        if (lVar2 != 0) {
                          if ((*(int *)(lVar2 + 0x18) == 0) ||
                             (*(undefined2 *)(lVar2 + 0x20) = 0xfeaf, uVar3 = DAT_0919c650,
                             *(int *)(lVar2 + 0x18) == 1)) goto LAB_042e2568;
                          *(undefined2 *)(lVar2 + 0x22) = 0xfeb0;
                          FUN_06e77a50(lVar1,0x632,lVar2,uVar3);
                          uVar3 = FUN_03f5c394(DAT_091807a8,4);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    (uVar3,DAT_091f38d0,0);
                          FUN_06e77a50(lVar1,0x633,uVar3,DAT_0919c650);
                          uVar3 = FUN_03f5c394(DAT_091807a8,4);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    (uVar3,DAT_091f3900,0);
                          FUN_06e77a50(lVar1,0x634,uVar3,DAT_0919c650);
                          uVar3 = FUN_03f5c394(DAT_091807a8,4);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    (uVar3,DAT_091f3870,0);
                          FUN_06e77a50(lVar1,0x635,uVar3,DAT_0919c650);
                          uVar3 = FUN_03f5c394(DAT_091807a8,4);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    (uVar3,DAT_091f3910,0);
                          FUN_06e77a50(lVar1,0x636,uVar3,DAT_0919c650);
                          uVar3 = FUN_03f5c394(DAT_091807a8,4);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    (uVar3,DAT_091f3850,0);
                          FUN_06e77a50(lVar1,0x637,uVar3,DAT_0919c650);
                          uVar3 = FUN_03f5c394(DAT_091807a8,4);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    (uVar3,DAT_091f3898,0);
                          FUN_06e77a50(lVar1,0x638,uVar3,DAT_0919c650);
                          uVar3 = FUN_03f5c394(DAT_091807a8,4);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    (uVar3,DAT_091f3918,0);
                          FUN_06e77a50(lVar1,0x639,uVar3,DAT_0919c650);
                          uVar3 = FUN_03f5c394(DAT_091807a8,4);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    (uVar3,DAT_091f3930,0);
                          FUN_06e77a50(lVar1,0x63a,uVar3,DAT_0919c650);
                          uVar3 = FUN_03f5c394(DAT_091807a8,4);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    (uVar3,DAT_091f38e8,0);
                          FUN_06e77a50(lVar1,0x641,uVar3,DAT_0919c650);
                          uVar3 = FUN_03f5c394(DAT_091807a8,4);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    (uVar3,DAT_091f38f8,0);
                          FUN_06e77a50(lVar1,0x642,uVar3,DAT_0919c650);
                          uVar3 = FUN_03f5c394(DAT_091807a8,4);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    (uVar3,DAT_091f3860,0);
                          FUN_06e77a50(lVar1,0x643,uVar3,DAT_0919c650);
                          uVar3 = FUN_03f5c394(DAT_091807a8,4);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    (uVar3,DAT_091f3920,0);
                          FUN_06e77a50(lVar1,0x644,uVar3,DAT_0919c650);
                          uVar3 = FUN_03f5c394(DAT_091807a8,4);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    (uVar3,DAT_091f3928,0);
                          FUN_06e77a50(lVar1,0x645,uVar3,DAT_0919c650);
                          uVar3 = FUN_03f5c394(DAT_091807a8,4);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    (uVar3,DAT_091f3948,0);
                          FUN_06e77a50(lVar1,0x646,uVar3,DAT_0919c650);
                          uVar3 = FUN_03f5c394(DAT_091807a8,4);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    (uVar3,DAT_091f38f0,0);
                          FUN_06e77a50(lVar1,0x647,uVar3,DAT_0919c650);
                          lVar2 = FUN_03f5c394(DAT_091807a8,4);
                          if (lVar2 != 0) {
                            if ((*(int *)(lVar2 + 0x18) == 0) ||
                               (*(undefined2 *)(lVar2 + 0x20) = 0xfeed, uVar3 = DAT_0919c650,
                               *(int *)(lVar2 + 0x18) == 1)) goto LAB_042e2568;
                            *(undefined2 *)(lVar2 + 0x22) = 0xfeee;
                            FUN_06e77a50(lVar1,0x648,lVar2,uVar3);
                            lVar2 = FUN_03f5c394(DAT_091807a8,4);
                            if (lVar2 != 0) {
                              if ((*(int *)(lVar2 + 0x18) == 0) ||
                                 (*(undefined2 *)(lVar2 + 0x20) = 0xfeef, uVar3 = DAT_0919c650,
                                 *(int *)(lVar2 + 0x18) == 1)) goto LAB_042e2568;
                              *(undefined2 *)(lVar2 + 0x22) = 0xfef0;
                              FUN_06e77a50(lVar1,0x649,lVar2,uVar3);
                              uVar3 = FUN_03f5c394(DAT_091807a8,4);
                              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                        (uVar3,DAT_091f3878,0);
                              FUN_06e77a50(lVar1,0x64a,uVar3,DAT_0919c650);
                              **(long **)(DAT_09181520 + 0xb8) = lVar1;
                              thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09181520 + 0xb8),lVar1);
                              lVar1 = thunk_FUN_03f9944c(DAT_09176080);
                              FUN_06e76c94(lVar1,DAT_0919c648);
                              lVar2 = FUN_03f5c394(DAT_091807a8,2);
                              if (lVar2 != 0) {
                                if ((*(int *)(lVar2 + 0x18) == 0) ||
                                   (*(undefined2 *)(lVar2 + 0x20) = 0xfef5,
                                   *(int *)(lVar2 + 0x18) == 1)) goto LAB_042e2568;
                                *(undefined2 *)(lVar2 + 0x22) = 0xfef6;
                                if (lVar1 != 0) {
                                  FUN_06e77a50(lVar1,0x622,lVar2,DAT_0919c650);
                                  lVar2 = FUN_03f5c394(DAT_091807a8,2);
                                  if (lVar2 != 0) {
                                    if ((*(int *)(lVar2 + 0x18) != 0) &&
                                       (*(undefined2 *)(lVar2 + 0x20) = 0xfef7, uVar3 = DAT_0919c650
                                       , *(int *)(lVar2 + 0x18) != 1)) {
                                      *(undefined2 *)(lVar2 + 0x22) = 0xfef8;
                                      FUN_06e77a50(lVar1,0x623,lVar2,uVar3);
                                      lVar2 = FUN_03f5c394(DAT_091807a8,2);
                                      if (lVar2 == 0) goto LAB_042e256c;
                                      if ((*(int *)(lVar2 + 0x18) != 0) &&
                                         (*(undefined2 *)(lVar2 + 0x20) = 0xfef9,
                                         uVar3 = DAT_0919c650, *(int *)(lVar2 + 0x18) != 1)) {
                                        *(undefined2 *)(lVar2 + 0x22) = 0xfefa;
                                        FUN_06e77a50(lVar1,0x625,lVar2,uVar3);
                                        lVar2 = FUN_03f5c394(DAT_091807a8,2);
                                        if (lVar2 == 0) goto LAB_042e256c;
                                        if ((*(int *)(lVar2 + 0x18) != 0) &&
                                           (*(undefined2 *)(lVar2 + 0x20) = 0xfefb,
                                           uVar3 = DAT_0919c650, *(int *)(lVar2 + 0x18) != 1)) {
                                          *(undefined2 *)(lVar2 + 0x22) = 0xfefc;
                                          FUN_06e77a50(lVar1,0x627,lVar2,uVar3);
                                          plVar4 = (long *)(*(long *)(DAT_09181520 + 0xb8) + 8);
                                          *plVar4 = lVar1;
                                          thunk_FUN_03f5d7b8(plVar4,lVar1);
                                          return;
                                        }
                                      }
                                    }
                                    goto LAB_042e2568;
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
LAB_042e256c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

