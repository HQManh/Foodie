// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingBurgerUIDisplay$$GetRender
// address: 0x44cb9f4
// body: available
// range: 0x44cb9f4-0x44cbccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44cbc90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookOrder_Cooking_Implement_CookingBurgerUIDisplay__GetRender(long param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int local_64;
  long local_58;
  
  if ((DAT_095182ab & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1660);
    FUN_03f5c2a4(&DAT_091a1670);
    FUN_03f5c2a4(&DAT_091ad880);
    FUN_03f5c2a4(&DAT_091ad878);
    FUN_03f5c2a4(&DAT_091ad8a8);
    FUN_03f5c2a4(&DAT_091ad8b0);
    FUN_03f5c2a4(&DAT_0917c468);
    FUN_03f5c2a4(&DAT_091d4d68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_092267b0);
    DAT_095182ab = 1;
  }
  local_58 = 0;
  if (param_3 < 1) {
    if (param_2 != 0) {
      return *(undefined8 *)(param_2 + 0x10);
    }
  }
  else if ((param_2 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    uVar3 = FUN_06f359c8(*(long *)(param_1 + 0x48),*(undefined4 *)(param_2 + 0x18),&local_58,
                         DAT_091a1660);
    if ((uVar3 & 1) == 0) {
      lVar9 = *(long *)(param_1 + 0x48);
      uVar1 = *(undefined4 *)(param_2 + 0x18);
      lVar4 = thunk_FUN_03f9944c(DAT_0917c468);
      FUN_057e0400(lVar4,DAT_091ad878);
      local_58 = lVar4;
      if (lVar9 == 0) goto LAB_044cbc90;
      FUN_06f33ed8(lVar9,uVar1,lVar4,DAT_091a1670);
    }
    if (local_58 != 0) {
      while( true ) {
        if (param_3 <= *(int *)(local_58 + 0x18)) {
          uVar5 = FUN_057e0998(local_58,param_3 + -1,DAT_091ad8b0);
          return uVar5;
        }
        lVar4 = *(long *)(param_2 + 0x10);
        if ((lVar4 == 0) || (lVar9 = UnityEngine_Component__get_transform(lVar4,0), lVar9 == 0))
        break;
        uVar5 = UnityEngine_Transform__GetParent(lVar9,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        lVar4 = FUN_04c353a8(lVar4,uVar5,0,DAT_091d4d68);
        if ((*(long *)(param_2 + 0x10) == 0) ||
           (uVar5 = UnityEngine_Object__GetName(*(long *)(param_2 + 0x10),0), local_58 == 0)) break;
        local_64 = *(int *)(local_58 + 0x18) + 2;
        uVar6 = FUN_03f5c42c(DAT_09535420,&local_64);
        uVar5 = System_String__Format(DAT_092267b0,uVar5,uVar6,0);
        if ((lVar4 == 0) ||
           (UnityEngine_Object__SetName(lVar4,uVar5,0), lVar9 = DAT_091ad880, local_58 == 0)) break;
        lVar7 = *(long *)(local_58 + 0x10);
        *(int *)(local_58 + 0x1c) = *(int *)(local_58 + 0x1c) + 1;
        if (lVar7 == 0) break;
        uVar2 = *(uint *)(local_58 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(local_58 + 0x18) = uVar2 + 1;
          plVar8 = (long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
          *plVar8 = lVar4;
          thunk_FUN_03f5d7b8(plVar8,lVar4);
        }
        else {
          FUN_057e0c68(local_58,lVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        if (local_58 == 0) break;
      }
    }
  }
LAB_044cbc90:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

