// rea decompile_all
// name: CookingGraph.CookingSelectionRules.<>c__DisplayClass0_0$$<Allows>g__Visit|0
// address: 0x4406a74
// body: available
// range: 0x4406a74-0x440702b inclusive
// range: 0x4407060-0x440707f inclusive
// range: 0x4407130-0x44071c3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4407028 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4407060 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4407064 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4407068 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440706c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4407074 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4407078 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440707c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44071c0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04407018) */
/* WARNING: Removing unreachable block (ram,0x04407070) */
/* WARNING: Removing unreachable block (ram,0x044071c0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CookingGraph_CookingSelectionRules_<>c__DisplayClass0_0__<Allows>g__Visit_0
               (long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  long local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  
  if ((DAT_09517eac & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9c40);
    FUN_03f5c2a4(&DAT_091ca8f8);
    FUN_03f5c2a4(&DAT_091cb568);
    FUN_03f5c2a4(&DAT_091a2630);
    FUN_03f5c2a4(&DAT_091a3dd0);
    FUN_03f5c2a4(&DAT_091a3dd8);
    FUN_03f5c2a4(&DAT_091a2638);
    FUN_03f5c2a4(&DAT_091a3de0);
    FUN_03f5c2a4(&DAT_091a2640);
    FUN_03f5c2a4(&DAT_09178e58);
    FUN_03f5c2a4(&DAT_091785c8);
    FUN_03f5c2a4(&DAT_09178588);
    FUN_03f5c2a4(&DAT_091a8268);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a6b0);
    FUN_03f5c2a4(&DAT_0917ad90);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091af2b8);
    FUN_03f5c2a4(&DAT_091abc38);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e8018);
    FUN_03f5c2a4(&DAT_091e8028);
    FUN_03f5c2a4(&DAT_091e8030);
    FUN_03f5c2a4(&DAT_0918f750);
    FUN_03f5c2a4(&DAT_0918f740);
    DAT_09517eac = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_80 = 0;
  local_78 = (long *)0x0;
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  lVar1 = thunk_FUN_03f9944c(DAT_0918f750);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    puVar6 = (undefined8 *)(lVar1 + 0x10);
    *puVar6 = param_2;
    thunk_FUN_03f5d7b8(puVar6,param_2);
    uVar5 = *puVar6;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = FUN_053ec72c(*(long *)(param_1 + 0x10),*puVar6,DAT_091a8268);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x88);
        if (*(int *)(DAT_0918f740 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar6 = *(undefined8 **)(DAT_0918f740 + 0xb8);
        lVar7 = puVar6[1];
        if (lVar7 == 0) {
          if (*(int *)(DAT_0918f740 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar6 = *(undefined8 **)(DAT_0918f740 + 0xb8);
          }
          uVar8 = *puVar6;
          lVar7 = thunk_FUN_03f9944c(DAT_09178588);
          FUN_05324070(lVar7,uVar8,DAT_091e8018,0);
          plVar3 = (long *)(*(long *)(DAT_0918f740 + 0xb8) + 8);
          *plVar3 = lVar7;
          thunk_FUN_03f5d7b8(plVar3,lVar7);
        }
        uVar5 = FUN_04afac50(uVar5,lVar7,DAT_091ca8f8);
        uVar8 = thunk_FUN_03f9944c(DAT_091785c8);
        FUN_05322d94(uVar8,lVar1,DAT_091e8028,0);
        lVar7 = FUN_04ae5fd0(uVar5,uVar8,DAT_091c9c40);
        if (lVar7 != 0) {
          if (*(long *)(lVar7 + 0x18) == 0) goto LAB_0440707c;
          FUN_057e185c(&local_a8,*(long *)(lVar7 + 0x18),DAT_091abc38);
          puStack_68 = puStack_a0;
          local_70 = local_a8;
          local_60 = local_98;
          local_a8 = 0;
          puStack_a0 = &local_70;
          while (uVar2 = FUN_071bd28c(&local_70,DAT_091a2638), (uVar2 & 1) != 0) {
            if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            CookingGraph_CookingSelectionRules_<>c__DisplayClass0_0__<Allows>g__Visit_0
                      (param_1,*(undefined8 *)(local_60 + 0x18));
          }
          FUN_071bd288(&local_70,DAT_091a2630);
        }
        if (*(long *)(param_1 + 0x18) != 0) {
          uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x80);
          lVar7 = *(long *)(lVar1 + 0x18);
          if (lVar7 == 0) {
            lVar7 = thunk_FUN_03f9944c(DAT_09178e58);
            FUN_05322d94(lVar7,lVar1,DAT_091e8030,0);
            *(long *)(lVar1 + 0x18) = lVar7;
            thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),lVar7);
          }
          plVar3 = (long *)FUN_04b0cafc(uVar5,lVar7,DAT_091cb568);
          if (plVar3 != (long *)0x0) {
            lVar1 = *plVar3;
            uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
            if (uVar2 != 0) {
              piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              do {
                if (*(long *)(piVar4 + -2) == DAT_0917a6b0) {
                  puVar6 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
                  goto LAB_04406e9c;
                }
                uVar2 = uVar2 - 1;
                piVar4 = piVar4 + 4;
              } while (uVar2 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a6b0,0);
LAB_04406e9c:
            local_78 = (long *)(*(code *)*puVar6)(plVar3,puVar6[1]);
            if (local_78 != (long *)0x0) {
              do {
                plVar3 = local_78;
                lVar1 = *local_78;
                uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
                if (uVar2 != 0) {
                  piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar4 + -2) == DAT_09185b10) {
                      puVar6 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
                      goto LAB_04406f34;
                    }
                    uVar2 = uVar2 - 1;
                    piVar4 = piVar4 + 4;
                  } while (uVar2 != 0);
                }
                puVar6 = (undefined8 *)FUN_03f95da8(local_78,DAT_09185b10,0);
LAB_04406f34:
                uVar2 = (*(code *)*puVar6)(plVar3,puVar6[1]);
                plVar3 = local_78;
                if ((uVar2 & 1) == 0) {
                  if (local_78 == (long *)0x0) {
                    return;
                  }
                  lVar1 = *local_78;
                  uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
                  if (uVar2 == 0) goto LAB_04407174;
                  piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
                  goto LAB_0440715c;
                }
                if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar1 = *local_78;
                uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
                if (uVar2 != 0) {
                  piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar4 + -2) == DAT_0917ad90) {
                      puVar6 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
                      goto LAB_04406f98;
                    }
                    uVar2 = uVar2 - 1;
                    piVar4 = piVar4 + 4;
                  } while (uVar2 != 0);
                }
                puVar6 = (undefined8 *)FUN_03f95da8(local_78,DAT_0917ad90,0);
LAB_04406f98:
                lVar1 = (*(code *)*puVar6)(plVar3,puVar6[1]);
                if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (*(long *)(lVar1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                FUN_057e185c(&local_a8,*(long *)(lVar1 + 0x20),DAT_091af2b8);
                local_90 = local_a8;
                local_a8 = 0;
                puStack_88 = puStack_a0;
                local_80 = local_98;
                puStack_a0 = &local_90;
                while (uVar2 = FUN_071bd28c(&local_90,DAT_091a3dd8), (uVar2 & 1) != 0) {
                  if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  CookingGraph_CookingSelectionRules_<>c__DisplayClass0_0__<Allows>g__Visit_0
                            (param_1,*(undefined8 *)(local_80 + 0x10));
                }
                FUN_071bd288(&local_90,DAT_091a3dd0);
              } while (local_78 != (long *)0x0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
      }
    }
  }
LAB_0440707c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
LAB_0440715c:
    if (*(long *)(piVar4 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_04407190;
    }
  }
LAB_04407174:
  puVar6 = (undefined8 *)FUN_03f95da8(local_78,DAT_09185a58,0);
LAB_04407190:
  (*(code *)*puVar6)(plVar3,puVar6[1]);
  return;
}

