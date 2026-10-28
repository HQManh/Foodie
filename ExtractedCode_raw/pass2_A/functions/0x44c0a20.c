// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$<Bind>b__171_1
// address: 0x44c0a20
// body: available
// range: 0x44c0a20-0x44c0c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c0c3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c0c40 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
CookOrder_Cooking_Implement_CookingGameplayPresentation__<Bind>b__171_1(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  uint local_44;
  
  if ((DAT_0951825a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b7640);
    FUN_03f5c2a4(&DAT_091b7638);
    FUN_03f5c2a4(&DAT_091b7648);
    DAT_0951825a = 1;
  }
  local_44 = 0;
  local_50 = 0;
  if ((param_2 == 0) || (*(long *)(param_1 + 0x2e0) == 0)) goto LAB_044c0c3c;
  lVar1 = CookOrder_Cooking_Implement_CookingMapPresentation__Art
                    (*(long *)(param_1 + 0x2e0),*(undefined4 *)(param_2 + 0x30),0);
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x18) == 0)) {
LAB_044c0ae8:
    if (DAT_09515cf3 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf3 = '\x01';
    }
    uVar5 = *(undefined4 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
  }
  else {
    lVar2 = UnityEngine_GameObject__get_transform(*(long *)(lVar1 + 0x18),0);
    if (lVar2 == 0) goto LAB_044c0c3c;
    UnityEngine_Transform__get_localScale(lVar2,0);
    local_60 = 0;
    uStack_58 = 0;
    FUN_05c3a618(&local_60,DAT_091b7638);
    if ((char)local_60 == '\0') goto LAB_044c0ae8;
    uVar5 = local_60._4_4_;
  }
  if (*(int *)(param_2 + 0x34) == 0) {
    if (*(int *)(param_2 + 0x58) == 1) {
      if (*(long *)(param_2 + 0x60) == 0) goto LAB_044c0c3c;
      uVar4 = System_String__Substring(*(long *)(param_2 + 0x60),5,0);
      uVar3 = System_Int32__TryParse(uVar4,&local_44,0);
      if ((uVar3 & 1) != 0) {
        lVar2 = *(long *)(param_1 + 0x1c0);
        if (lVar2 == 0) goto LAB_044c0c3c;
        if ((int)local_44 < (int)*(uint *)(lVar2 + 0x18)) {
          if (*(uint *)(lVar2 + 0x18) <= local_44) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar2 = *(long *)(lVar2 + (long)(int)local_44 * 8 + 0x20);
          if (lVar2 != 0) {
            if (lVar1 == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined8 *)(lVar1 + 0x10);
            }
            lVar1 = CookOrder_Cooking_Implement_CookingToolPresentation__LandingFor(lVar2,uVar4,0);
            if ((lVar1 != 0) && (*(long *)(lVar1 + 0x18) != 0)) {
              UnityEngine_Transform__get_localScale(*(long *)(lVar1 + 0x18),0);
              local_60 = 0;
              uStack_58 = 0;
              FUN_05c3a618(&local_60,DAT_091b7638);
              if ((char)local_60 != '\0') {
                uVar5 = local_60._4_4_;
              }
            }
          }
        }
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x2f0) == 0) {
LAB_044c0c3c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = CookOrder_Cooking_Implement_CookingSceneBindings__TryGetUnit
                      (*(long *)(param_1 + 0x2f0),*(undefined8 *)(param_2 + 0x28),&local_50,0);
    if ((uVar3 & 1) != 0) {
      if (local_50 == 0) goto LAB_044c0c3c;
      uVar5 = UnityEngine_Transform__get_localScale(local_50,0);
    }
  }
  return uVar5;
}

