// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$TryAnchor
// address: 0x44ac51c
// body: available
// range: 0x44ac51c-0x44aca1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44aca14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44aca18 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8
CookOrder_Cooking_Implement_CookingGameplayPresentation__TryAnchor
          (long param_1,int *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_50 [2];
  undefined8 local_38;
  
  if ((DAT_09518236 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c55d8);
    FUN_03f5c2a4(&DAT_0919f990);
    FUN_03f5c2a4(&DAT_091a0028);
    FUN_03f5c2a4(&DAT_0919d638);
    FUN_03f5c2a4(&DAT_0919de38);
    FUN_03f5c2a4(&DAT_091a0038);
    FUN_03f5c2a4(&DAT_091cd628);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09200a18);
    DAT_09518236 = 1;
  }
  local_38 = 0;
  local_50[0] = 0;
  local_50[1] = 0;
  if (*(long *)(param_1 + 0x2f0) == 0) goto LAB_044aca14;
  uStack_68 = *(undefined8 *)(param_2 + 2);
  local_70 = *(undefined8 *)param_2;
  local_60 = *(undefined8 *)(param_2 + 4);
  uVar4 = CookOrder_Cooking_Implement_CookingSceneBindings__TryGetEndpoint
                    (*(long *)(param_1 + 0x2f0),&local_70,param_3,0);
  if ((uVar4 & 1) == 0) {
    iVar1 = *param_2;
    if (iVar1 < 5) {
      if (iVar1 == 1) {
        if (*(long *)(param_2 + 2) == 0) goto LAB_044aca14;
        uVar5 = System_String__Substring(*(long *)(param_2 + 2),5,0);
        uVar4 = System_Int32__TryParse(uVar5,(long)&local_38 + 4,0);
        if ((uVar4 & 1) != 0) {
          lVar7 = *(long *)(param_1 + 0x1c0);
          if (lVar7 == 0) goto LAB_044aca14;
          if ((int)local_38._4_4_ < (int)*(uint *)(lVar7 + 0x18)) {
            if (*(uint *)(lVar7 + 0x18) <= local_38._4_4_) {
LAB_044aca18:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uVar5 = *(undefined8 *)(lVar7 + (long)(int)local_38._4_4_ * 8 + 0x20);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Implicit(uVar5,0);
            if ((uVar4 & 1) != 0) {
              lVar7 = *(long *)(param_1 + 0x1c0);
              if (lVar7 == 0) goto LAB_044aca14;
              if (*(uint *)(lVar7 + 0x18) <= local_38._4_4_) goto LAB_044aca18;
              lVar7 = *(long *)(lVar7 + (long)(int)local_38._4_4_ * 8 + 0x20);
              if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x40), lVar7 == 0)) goto LAB_044aca14;
              uVar2 = param_2[4];
              if ((int)uVar2 < (int)*(uint *)(lVar7 + 0x18)) {
                if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_044aca18;
                lVar7 = lVar7 + (long)(int)uVar2 * 8;
                goto LAB_044ac7fc;
              }
            }
          }
        }
      }
      else {
        if (iVar1 == 3) {
          if (*(long *)(param_1 + 0x348) == 0) goto LAB_044aca14;
          plVar8 = local_50 + 1;
          uVar4 = FUN_06ef1fe8(*(long *)(param_1 + 0x348),param_2[4],local_50 + 1,DAT_0919de38);
          if ((uVar4 & 1) == 0) {
            lVar7 = *(long *)(param_1 + 0x1a0);
            if (lVar7 == 0) goto LAB_044aca14;
            if (*(uint *)(lVar7 + 0x18) <= (uint)param_2[4]) goto LAB_044aca18;
            plVar8 = (long *)(lVar7 + (long)param_2[4] * 8 + 0x20);
          }
          *param_3 = *plVar8;
          thunk_FUN_03f5d7b8(param_3);
          if (*param_3 == 0) goto LAB_044aca14;
          lVar7 = FUN_04a6a4f8(*param_3,1,DAT_091c55d8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar4 = UnityEngine_Object__op_Implicit(lVar7,0);
          if ((uVar4 & 1) != 0) {
            if (lVar7 == 0) goto LAB_044aca14;
            uVar5 = *(undefined8 *)(lVar7 + 0x20);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Implicit(uVar5,0);
            if ((uVar4 & 1) != 0) {
              lVar7 = *(long *)(lVar7 + 0x20);
              goto LAB_044ac994;
            }
          }
        }
        else {
          if (iVar1 != 4) {
            return 0;
          }
          uStack_88 = *(undefined8 *)(param_2 + 2);
          local_90 = *(undefined8 *)param_2;
          local_80 = *(undefined8 *)(param_2 + 4);
          lVar7 = *(long *)(param_1 + 0x328);
          uVar5 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DishKey(&local_90);
          if (lVar7 == 0) goto LAB_044aca14;
          uVar4 = FUN_06fd9fbc(lVar7,uVar5,param_3,DAT_091a0038);
          if ((uVar4 & 1) == 0) {
            uVar3 = CookOrder_Cooking_Implement_CookingGameplayPresentation__ReserveShelf(param_1);
            uStack_a8 = *(undefined8 *)(param_2 + 2);
            local_b0 = *(undefined8 *)param_2;
            local_a0 = *(undefined8 *)(param_2 + 4);
            uVar5 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DishKey(&local_b0);
            uVar5 = System_String__Concat(DAT_09200a18,uVar5,0);
            uVar6 = CookOrder_Cooking_Implement_CookingGameplayPresentation__ShelfAt(param_1,uVar3);
            lVar7 = CookOrder_Cooking_Implement_CookingGameplayPresentation__NewAnchor(uVar5,uVar6);
            *param_3 = lVar7;
            thunk_FUN_03f5d7b8(param_3,lVar7);
            if ((*param_3 == 0) ||
               (lVar7 = UnityEngine_Component__get_gameObject(*param_3,0), lVar7 == 0))
            goto LAB_044aca14;
            FUN_04b7c294(lVar7,DAT_091cd628);
            uStack_c8 = *(undefined8 *)(param_2 + 2);
            local_d0 = *(undefined8 *)param_2;
            local_c0 = *(undefined8 *)(param_2 + 4);
            lVar7 = *(long *)(param_1 + 0x328);
            uVar5 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DishKey(&local_d0);
            if (lVar7 == 0) goto LAB_044aca14;
            FUN_06fd8454(lVar7,uVar5,*param_3,DAT_091a0028);
            uStack_e8 = *(undefined8 *)(param_2 + 2);
            local_f0 = *(undefined8 *)param_2;
            local_e0 = *(undefined8 *)(param_2 + 4);
            lVar7 = *(long *)(param_1 + 0x330);
            uVar5 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DishKey(&local_f0);
            if (lVar7 == 0) goto LAB_044aca14;
            FUN_06fca448(lVar7,uVar5,uVar3,DAT_0919f990);
            CookOrder_Cooking_Implement_CookingGameplayPresentation__ReflowShelves(param_1);
          }
        }
LAB_044ac9a0:
        lVar7 = *param_3;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(lVar7,0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)(param_1 + 0x2f0) == 0) {
LAB_044aca14:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uStack_108 = *(undefined8 *)(param_2 + 2);
          local_110 = *(undefined8 *)param_2;
          local_100 = *(undefined8 *)(param_2 + 4);
          CookOrder_Cooking_Implement_CookingSceneBindings__BindEndpoint
                    (*(long *)(param_1 + 0x2f0),&local_110,*param_3,0);
          goto LAB_044ac5f0;
        }
      }
    }
    else {
      if (1 < iVar1 - 5U) {
        return 0;
      }
      if (*(long *)(param_2 + 2) == 0) goto LAB_044aca14;
      uVar5 = System_String__Substring(*(long *)(param_2 + 2),9,0);
      uVar4 = System_Int32__TryParse(uVar5,&local_38,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x308) == 0) goto LAB_044aca14;
        uVar4 = FUN_06ef1fe8(*(long *)(param_1 + 0x308),local_38 & 0xffffffff,local_50,DAT_0919d638)
        ;
        lVar7 = local_50[0];
        if ((uVar4 & 1) != 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(lVar7,0);
          if ((uVar4 & 1) != 0) {
            lVar7 = local_50[0];
            if (local_50[0] == 0) goto LAB_044aca14;
LAB_044ac7fc:
            lVar7 = *(long *)(lVar7 + 0x20);
LAB_044ac994:
            *param_3 = lVar7;
            thunk_FUN_03f5d7b8(param_3);
            goto LAB_044ac9a0;
          }
        }
      }
    }
    uVar5 = 0;
  }
  else {
LAB_044ac5f0:
    uVar5 = 1;
  }
  return uVar5;
}

