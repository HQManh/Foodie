// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingFlightPresentation$$TryStart
// address: 0x44d5f94
// body: available
// range: 0x44d5f94-0x44d6457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d6448 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d644c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d6450 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d6454 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookOrder_Cooking_Implement_CookingFlightPresentation__TryStart
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,long param_5,
          undefined8 param_6,undefined8 *param_7,undefined8 *param_8)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_58;
  
  if ((DAT_095182f6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09182d38);
    FUN_03f5c2a4(&DAT_091a8308);
    FUN_03f5c2a4(&DAT_091b2498);
    FUN_03f5c2a4(&DAT_0918efe8);
    FUN_03f5c2a4(&DAT_091e6d98);
    FUN_03f5c2a4(&DAT_0918efe0);
    FUN_03f5c2a4(&DAT_09207f20);
    FUN_03f5c2a4(&DAT_0920ac28);
    FUN_03f5c2a4(&DAT_09207f88);
    FUN_03f5c2a4(&DAT_09212088);
    DAT_095182f6 = 1;
  }
  local_58 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0918efe0);
  System_Object___ctor(lVar2,0);
  if (lVar2 == 0) goto LAB_044d6448;
  *(long *)(lVar2 + 0x10) = param_4;
  thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_4);
  plVar10 = (long *)(lVar2 + 0x18);
  *plVar10 = param_5;
  thunk_FUN_03f5d7b8(plVar10,param_5);
  *param_7 = 0;
  thunk_FUN_03f5d7b8(param_7,0);
  *param_8 = 0;
  thunk_FUN_03f5d7b8(param_8,0);
  uVar5 = DAT_0920ac28;
  if (*(char *)(param_4 + 0x30) != '\0') {
    *param_8 = DAT_0920ac28;
    goto LAB_044d6278;
  }
  lVar7 = *plVar10;
  if ((lVar7 == 0) || (*(long *)(param_4 + 0x10) == 0)) goto LAB_044d6448;
  uStack_c8 = *(undefined8 *)(lVar7 + 0x48);
  local_d0 = *(undefined8 *)(lVar7 + 0x40);
  local_c0 = *(undefined8 *)(lVar7 + 0x50);
  uVar3 = CookOrder_Cooking_Implement_CookingSceneBindings__TryGetEndpoint
                    (*(long *)(param_4 + 0x10),&local_d0,&local_a0,0);
  if ((uVar3 & 1) == 0) {
LAB_044d61fc:
    lVar2 = *plVar10;
    if (lVar2 == 0) {
LAB_044d6448:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uStack_108 = *(undefined8 *)(lVar2 + 0x48);
    local_110 = *(undefined8 *)(lVar2 + 0x40);
    local_100 = *(undefined8 *)(lVar2 + 0x50);
    uVar5 = FUN_03f5c42c(DAT_09182d38,&local_110);
    lVar2 = *plVar10;
    if (lVar2 == 0) goto LAB_044d6448;
    uStack_128 = *(undefined8 *)(lVar2 + 0x60);
    local_130 = *(undefined8 *)(lVar2 + 0x58);
    local_120 = *(undefined8 *)(lVar2 + 0x68);
    uVar4 = FUN_03f5c42c(DAT_09182d38,&local_130);
    uVar5 = System_String__Format(DAT_09207f20,uVar5,uVar4,0);
  }
  else {
    lVar7 = *plVar10;
    if ((lVar7 == 0) || (*(long *)(param_4 + 0x10) == 0)) goto LAB_044d6448;
    uStack_e8 = *(undefined8 *)(lVar7 + 0x60);
    local_f0 = *(undefined8 *)(lVar7 + 0x58);
    local_e0 = *(undefined8 *)(lVar7 + 0x68);
    uVar3 = CookOrder_Cooking_Implement_CookingSceneBindings__TryGetEndpoint
                      (*(long *)(param_4 + 0x10),&local_f0,&local_58,0);
    if ((uVar3 & 1) == 0) goto LAB_044d61fc;
    if ((*plVar10 == 0) || (*(long *)(param_4 + 0x10) == 0)) goto LAB_044d6448;
    uVar3 = CookOrder_Cooking_Implement_CookingSceneBindings__TryGetUnit
                      (*(long *)(param_4 + 0x10),*(undefined8 *)(*plVar10 + 0x28),&local_98,0);
    if ((uVar3 & 1) == 0) {
      if (*plVar10 == 0) goto LAB_044d6448;
      local_110 = *(undefined8 *)(*plVar10 + 0x28);
      uVar5 = FUN_03f5c42c(DAT_09535440,&local_110);
      puVar9 = &DAT_09207f88;
    }
    else {
      if ((*plVar10 == 0) || (*(long *)(param_4 + 0x28) == 0)) goto LAB_044d6448;
      uVar3 = FUN_053e230c(*(long *)(param_4 + 0x28),*(undefined8 *)(*plVar10 + 0x28),DAT_091a8308);
      uVar5 = local_58;
      lVar7 = local_98;
      if ((uVar3 & 1) != 0) {
        uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar4,lVar2,DAT_091e6d98,0);
        lVar2 = *(long *)(param_4 + 0x38);
        if (lVar2 == 0) {
          if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar12 = UnityEngine_Transform__get_localScale(local_98,0);
        }
        else {
          uVar12 = (**(code **)(lVar2 + 0x18))
                             (*(undefined8 *)(lVar2 + 0x40),*plVar10,*(undefined8 *)(lVar2 + 0x28));
        }
        lVar2 = *(long *)(param_4 + 0x40);
        uVar14 = param_2;
        uVar15 = param_3;
        if (lVar2 == 0) {
          if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar13 = UnityEngine_Transform__get_localScale(local_98,0);
        }
        else {
          uVar13 = (**(code **)(lVar2 + 0x18))
                             (*(undefined8 *)(lVar2 + 0x40),*plVar10,*(undefined8 *)(lVar2 + 0x28));
        }
        uVar11 = *(undefined8 *)(param_4 + 0x18);
        uVar6 = thunk_FUN_03f9944c(DAT_0918efe8);
        CookOrder_Cooking_Implement_CookingFlightPresentation_Motion___ctor
                  (uVar12,param_2,param_3,uVar13,uVar14,uVar15,uVar6,lVar7,uVar5,param_6,uVar4,
                   uVar11);
        lVar2 = DAT_091b2498;
        lVar7 = *(long *)(param_4 + 0x20);
        if (lVar7 != 0) {
          lVar8 = *(long *)(lVar7 + 0x10);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              puVar9 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *puVar9 = uVar6;
              thunk_FUN_03f5d7b8(puVar9,uVar6);
            }
            else {
              FUN_057e0c68(lVar7,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
            *param_7 = uVar6;
            thunk_FUN_03f5d7b8(param_7,uVar6);
            return 1;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*plVar10 == 0) goto LAB_044d6448;
      local_110 = *(undefined8 *)(*plVar10 + 0x28);
      uVar5 = FUN_03f5c42c(DAT_09535440,&local_110);
      puVar9 = &DAT_09212088;
    }
    uVar5 = System_String__Format(*puVar9,uVar5,0);
  }
  *param_8 = uVar5;
LAB_044d6278:
  thunk_FUN_03f5d7b8(param_8,uVar5);
  return 0;
}

