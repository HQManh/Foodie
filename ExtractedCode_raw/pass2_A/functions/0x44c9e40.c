// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingBurgerDisplay$$GetRenderer
// address: 0x44c9e40
// body: available
// range: 0x44c9e40-0x44ca177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ca138 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookOrder_Cooking_Implement_CookingBurgerDisplay__GetRenderer(long param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  int local_5c;
  long local_58;
  
  if ((DAT_095182a0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1680);
    FUN_03f5c2a4(&DAT_091a1690);
    FUN_03f5c2a4(&DAT_091b0400);
    FUN_03f5c2a4(&DAT_091b03f0);
    FUN_03f5c2a4(&DAT_091b0428);
    FUN_03f5c2a4(&DAT_091b0430);
    FUN_03f5c2a4(&DAT_0917cc90);
    FUN_03f5c2a4(&DAT_091d4c68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_092267b0);
    DAT_095182a0 = 1;
  }
  local_58 = 0;
  if (param_3 < 1) {
    if (param_2 != 0) {
      return *(undefined8 *)(param_2 + 0x10);
    }
  }
  else if (param_2 != 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      uVar3 = FUN_06f359c8(*(long *)(param_1 + 0x60),*(undefined4 *)(param_2 + 0x18),&local_58,
                           DAT_091a1680);
      if ((uVar3 & 1) == 0) {
        lVar8 = *(long *)(param_1 + 0x60);
        uVar1 = *(undefined4 *)(param_2 + 0x18);
        lVar4 = thunk_FUN_03f9944c(DAT_0917cc90);
        FUN_057e0400(lVar4,DAT_091b03f0);
        local_58 = lVar4;
        if (lVar8 == 0) goto LAB_044ca138;
        FUN_06f33ed8(lVar8,uVar1,lVar4,DAT_091a1690);
      }
      if (local_58 != 0) {
        while( true ) {
          if (param_3 <= *(int *)(local_58 + 0x18)) {
            uVar9 = FUN_057e0998(local_58,param_3 + -1,DAT_091b0430);
            return uVar9;
          }
          lVar4 = *(long *)(param_2 + 0x10);
          if ((lVar4 == 0) || (lVar8 = UnityEngine_Component__get_transform(lVar4,0), lVar8 == 0))
          break;
          uVar9 = UnityEngine_Transform__GetParent(lVar8,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          lVar4 = FUN_04c35338(lVar4,uVar9,DAT_091d4c68);
          if ((*(long *)(param_2 + 0x10) == 0) ||
             (uVar9 = UnityEngine_Object__GetName(*(long *)(param_2 + 0x10),0), local_58 == 0))
          break;
          local_5c = *(int *)(local_58 + 0x18) + 2;
          uVar5 = FUN_03f5c42c(DAT_09535420,&local_5c);
          uVar9 = System_String__Format(DAT_092267b0,uVar9,uVar5,0);
          if (lVar4 == 0) break;
          UnityEngine_Object__SetName(lVar4,uVar9,0);
          lVar8 = UnityEngine_Component__get_transform(lVar4,0);
          if ((((*(long *)(param_2 + 0x10) == 0) ||
               (lVar6 = UnityEngine_Component__get_transform(*(long *)(param_2 + 0x10),0),
               lVar6 == 0)) || (UnityEngine_Transform__get_localScale(lVar6,0), lVar8 == 0)) ||
             (UnityEngine_Transform__set_localScale(lVar8,0), lVar8 = DAT_091b0400, local_58 == 0))
          break;
          lVar6 = *(long *)(local_58 + 0x10);
          *(int *)(local_58 + 0x1c) = *(int *)(local_58 + 0x1c) + 1;
          if (lVar6 == 0) break;
          uVar2 = *(uint *)(local_58 + 0x18);
          if (uVar2 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(local_58 + 0x18) = uVar2 + 1;
            plVar7 = (long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
            *plVar7 = lVar4;
            thunk_FUN_03f5d7b8(plVar7,lVar4);
          }
          else {
            FUN_057e0c68(local_58,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          if (local_58 == 0) break;
        }
      }
    }
  }
LAB_044ca138:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

