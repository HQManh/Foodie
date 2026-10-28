// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl$$ProcessLevelDesignData
// address: 0x4393420
// body: available
// range: 0x4393420-0x43936e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43936e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelPlayLoadAndSetupControl__ProcessLevelDesignData
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  
  if ((DAT_09517a48 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c53d8);
    FUN_03f5c2a4(&DAT_091cd6b8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091b97f0);
    FUN_03f5c2a4(&DAT_0918b3a0);
    DAT_09517a48 = 1;
  }
  local_60 = 0;
  local_90 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + 0x78);
    *puVar2 = 0;
    thunk_FUN_03f5d7b8(puVar2,0);
    if (*(long *)(param_1 + 0x30) != 0) {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + 0x80);
      *puVar2 = 0;
      thunk_FUN_03f5d7b8(puVar2,0);
      if (*(long *)(param_1 + 0x30) != 0) {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + 0x88);
        *puVar2 = 0;
        thunk_FUN_03f5d7b8(puVar2,0);
        if (*(long *)(param_1 + 0x30) != 0) {
          puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + 0x90);
          *puVar2 = 0;
          thunk_FUN_03f5d7b8(puVar2,0);
          uVar3 = System_String__IsNullOrEmpty(param_2,0);
          if ((uVar3 & 1) == 0) {
            if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            Utilities_StringExtension__SplitNonAlloc(&local_e8,param_2,0x7e,0);
            local_90 = local_c8;
            uStack_a8 = uStack_e0;
            local_b0 = local_e8;
            uStack_98 = uStack_d0;
            uStack_a0 = local_d8;
            Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_80,&local_b0,0);
            uVar3 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_80,0);
            if ((uVar3 & 1) != 0) {
              iVar7 = 0;
              do {
                uVar1 = local_60;
                uVar4 = local_68;
                if (iVar7 == 2) {
                  lVar6 = *(long *)(param_1 + 0x30);
                  local_c0 = local_68;
                  uStack_b8 = local_60;
                  uVar4 = FUN_05ff6c30(&local_c0,DAT_091b97f0);
                  if (lVar6 == 0) goto LAB_043936e4;
                  puVar2 = (undefined8 *)(lVar6 + 0x90);
                  *puVar2 = uVar4;
LAB_043936ac:
                  thunk_FUN_03f5d7b8(puVar2,uVar4);
                }
                else {
                  if (iVar7 == 1) {
                    lVar6 = FUN_04a6a14c(param_1,DAT_091c53d8);
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_09188ad0);
                    }
                    uVar3 = UnityEngine_Object__op_Implicit(lVar6,0);
                    if ((uVar3 & 1) == 0) {
                      lVar6 = UnityEngine_Component__get_gameObject(param_1,0);
                      if (lVar6 == 0) goto LAB_043936e4;
                      lVar6 = FUN_04b7c294(lVar6,DAT_091cd6b8);
                    }
                    if (lVar6 != 0) {
                      CakeOrder_LevelGridConfig__Clear(lVar6,0);
                      auVar8 = Utilities_StringExtension_StringSplitEntry__op_Implicit
                                         (uVar4,uVar1,0);
                      CakeOrder_LevelGridConfig__LoadConfigStr(lVar6,auVar8._0_8_,auVar8._8_8_,0);
                      if (*(long *)(param_1 + 0x30) != 0) {
                        plVar5 = (long *)(*(long *)(param_1 + 0x30) + 0x80);
                        *plVar5 = lVar6;
                        thunk_FUN_03f5d7b8(plVar5,lVar6);
                        lVar6 = *(long *)(param_1 + 0x30);
                        local_c0 = uVar4;
                        uStack_b8 = uVar1;
                        uVar4 = FUN_05ff6c30(&local_c0,DAT_091b97f0);
                        if (lVar6 != 0) {
                          puVar2 = (undefined8 *)(lVar6 + 0x88);
                          *puVar2 = uVar4;
                          goto LAB_043936ac;
                        }
                      }
                    }
                    goto LAB_043936e4;
                  }
                  if (iVar7 == 0) {
                    lVar6 = *(long *)(param_1 + 0x30);
                    local_c0 = local_68;
                    uStack_b8 = local_60;
                    uVar4 = FUN_05ff6c30(&local_c0,DAT_091b97f0);
                    if (lVar6 != 0) {
                      puVar2 = (undefined8 *)(lVar6 + 0x78);
                      *puVar2 = uVar4;
                      goto LAB_043936ac;
                    }
                    goto LAB_043936e4;
                  }
                }
                iVar7 = iVar7 + 1;
                uVar3 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_80,0);
              } while ((uVar3 & 1) != 0);
            }
          }
          return;
        }
      }
    }
  }
LAB_043936e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

