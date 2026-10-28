// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$ClearPlateMoves
// address: 0x44bf0b4
// body: available
// range: 0x44bf0b4-0x44bf3a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44bf398 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bf39c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bf3a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__ClearPlateMoves(long param_1)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long local_a0;
  undefined8 local_90;
  undefined8 *puStack_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  if ((DAT_09518252 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919eef8);
    FUN_03f5c2a4(&DAT_0919ef00);
    FUN_03f5c2a4(&DAT_091a2d38);
    FUN_03f5c2a4(&DAT_091a64e0);
    FUN_03f5c2a4(&DAT_091a2d40);
    FUN_03f5c2a4(&DAT_091a64e8);
    FUN_03f5c2a4(&DAT_091a2d48);
    FUN_03f5c2a4(&DAT_091a64f0);
    FUN_03f5c2a4(&DAT_091a86c0);
    FUN_03f5c2a4(&DAT_091a96e0);
    FUN_03f5c2a4(&DAT_091a96e8);
    FUN_03f5c2a4(&DAT_091acd58);
    FUN_03f5c2a4(&DAT_091acd60);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518252 = 1;
  }
  local_70 = 0;
  local_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  thunk_FUN_03f5d7b8(param_1 + 0x400,0);
  if (*(long *)(param_1 + 0x418) != 0) {
    FUN_06f825ec(&local_d8,*(long *)(param_1 + 0x418),DAT_0919ef00);
    local_70 = local_b8;
    puStack_88 = puStack_d0;
    local_90 = local_d8;
    local_78 = uStack_c0;
    local_80 = local_c8;
    local_d8 = 0;
    puStack_d0 = &local_90;
    while (uVar3 = FUN_0726da7c(&local_90,DAT_091a64e8), lVar4 = local_80, (uVar3 & 1) != 0) {
      cVar2 = (char)local_78;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
      if ((uVar3 & 1) != 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_Renderer__set_enabled(lVar4,cVar2 != '\0',0);
      }
    }
    FUN_0726dba4(&local_90,DAT_091a64e0);
    if (*(long *)(param_1 + 0x418) != 0) {
      FUN_06f82378(*(long *)(param_1 + 0x418),DAT_0919eef8);
      if (*(long *)(param_1 + 0x410) != 0) {
        FUN_057e185c(&local_d8,*(long *)(param_1 + 0x410),DAT_091acd60);
        local_a0 = local_c8;
        puStack_a8 = puStack_d0;
        local_b0 = local_d8;
        local_d8 = 0;
        puStack_d0 = &local_b0;
        while (uVar3 = FUN_071bd28c(&local_b0,DAT_091a2d40), lVar4 = local_a0, (uVar3 & 1) != 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
          if ((uVar3 & 1) != 0) {
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_GameObject__SetActive(lVar4,0,0);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_Object__Destroy(lVar4,0);
          }
        }
        FUN_071bd288(&local_b0,DAT_091a2d38);
        lVar4 = *(long *)(param_1 + 0x410);
        if (lVar4 != 0) {
          iVar1 = *(int *)(lVar4 + 0x18);
          *(undefined4 *)(lVar4 + 0x18) = 0;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (0 < iVar1) {
            System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
          }
          if (*(long *)(param_1 + 0x408) != 0) {
            FUN_053ebbdc(*(long *)(param_1 + 0x408),DAT_091a86c0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

