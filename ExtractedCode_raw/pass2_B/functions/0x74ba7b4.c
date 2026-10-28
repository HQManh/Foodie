// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.Converter$$InitArrayTypeA
// address: 0x74ba7b4
// body: available
// range: 0x74ba7b4-0x74bac2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74bac18 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74bac1c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74bac28 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74bac2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_Converter__InitArrayTypeA(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_0952145d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_0952145d = 1;
  }
  if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar1 = (long *)FUN_03f5c394(DAT_09180748,**(undefined4 **)(DAT_09182b98 + 0xb8));
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = 0;
    thunk_FUN_03f5d7b8(plVar1 + 4,0);
    lVar5 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0xf8);
    if ((lVar5 != 0) &&
       (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_074bac20:
      uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,0);
    }
    if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
      plVar1[5] = lVar5;
      thunk_FUN_03f5d7b8(plVar1 + 5,lVar5);
      lVar5 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x100);
      if ((lVar5 != 0) &&
         (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
      goto LAB_074bac20;
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = lVar5;
        thunk_FUN_03f5d7b8(plVar1 + 6,lVar5);
        lVar5 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x108);
        if ((lVar5 != 0) &&
           (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
        goto LAB_074bac20;
        if ((*(uint *)(plVar1 + 3) & 0xfffffffc) != 0) {
          plVar1[7] = lVar5;
          thunk_FUN_03f5d7b8(plVar1 + 7,lVar5);
          lVar5 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x110);
          if ((lVar5 != 0) &&
             (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
          goto LAB_074bac20;
          if (5 < *(uint *)(plVar1 + 3)) {
            plVar1[9] = lVar5;
            thunk_FUN_03f5d7b8(plVar1 + 9,lVar5);
            lVar5 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x118);
            if ((lVar5 != 0) &&
               (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
            goto LAB_074bac20;
            if (6 < *(uint *)(plVar1 + 3)) {
              plVar1[10] = lVar5;
              thunk_FUN_03f5d7b8(plVar1 + 10,lVar5);
              lVar5 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x120);
              if ((lVar5 != 0) &&
                 (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
              goto LAB_074bac20;
              if ((*(uint *)(plVar1 + 3) & 0xfffffff8) != 0) {
                plVar1[0xb] = lVar5;
                thunk_FUN_03f5d7b8(plVar1 + 0xb,lVar5);
                lVar5 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x128);
                if ((lVar5 != 0) &&
                   (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
                goto LAB_074bac20;
                if (8 < *(uint *)(plVar1 + 3)) {
                  plVar1[0xc] = lVar5;
                  thunk_FUN_03f5d7b8(plVar1 + 0xc,lVar5);
                  lVar5 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x130);
                  if ((lVar5 != 0) &&
                     (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)
                     ) goto LAB_074bac20;
                  if (9 < *(uint *)(plVar1 + 3)) {
                    plVar1[0xd] = lVar5;
                    thunk_FUN_03f5d7b8(plVar1 + 0xd,lVar5);
                    lVar5 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x138);
                    if ((lVar5 != 0) &&
                       (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)),
                       lVar2 == 0)) goto LAB_074bac20;
                    if (10 < *(uint *)(plVar1 + 3)) {
                      plVar1[0xe] = lVar5;
                      thunk_FUN_03f5d7b8(plVar1 + 0xe,lVar5);
                      lVar5 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x140);
                      if ((lVar5 != 0) &&
                         (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)),
                         lVar2 == 0)) goto LAB_074bac20;
                      if (0xb < *(uint *)(plVar1 + 3)) {
                        plVar1[0xf] = lVar5;
                        thunk_FUN_03f5d7b8(plVar1 + 0xf,lVar5);
                        lVar5 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x148);
                        if ((lVar5 != 0) &&
                           (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)),
                           lVar2 == 0)) goto LAB_074bac20;
                        if (0xc < *(uint *)(plVar1 + 3)) {
                          plVar1[0x10] = lVar5;
                          thunk_FUN_03f5d7b8(plVar1 + 0x10,lVar5);
                          lVar5 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x150);
                          if ((lVar5 != 0) &&
                             (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)),
                             lVar2 == 0)) goto LAB_074bac20;
                          if (0xd < *(uint *)(plVar1 + 3)) {
                            plVar1[0x11] = lVar5;
                            thunk_FUN_03f5d7b8(plVar1 + 0x11,lVar5);
                            lVar5 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x158);
                            if ((lVar5 != 0) &&
                               (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)),
                               lVar2 == 0)) goto LAB_074bac20;
                            if (0xe < *(uint *)(plVar1 + 3)) {
                              plVar1[0x12] = lVar5;
                              thunk_FUN_03f5d7b8(plVar1 + 0x12,lVar5);
                              lVar5 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x160);
                              if ((lVar5 != 0) &&
                                 (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)),
                                 lVar2 == 0)) goto LAB_074bac20;
                              if ((*(uint *)(plVar1 + 3) & 0xfffffff0) != 0) {
                                plVar1[0x13] = lVar5;
                                thunk_FUN_03f5d7b8(plVar1 + 0x13,lVar5);
                                lVar5 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x168);
                                if ((lVar5 != 0) &&
                                   (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)
                                                              ), lVar2 == 0)) goto LAB_074bac20;
                                if (0x10 < *(uint *)(plVar1 + 3)) {
                                  plVar1[0x14] = lVar5;
                                  thunk_FUN_03f5d7b8(plVar1 + 0x14,lVar5);
                                  thunk_FUN_03f6a5cc();
                                  plVar3 = (long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x10);
                                  *plVar3 = (long)plVar1;
                                  thunk_FUN_03f5d7b8(plVar3,plVar1);
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
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

