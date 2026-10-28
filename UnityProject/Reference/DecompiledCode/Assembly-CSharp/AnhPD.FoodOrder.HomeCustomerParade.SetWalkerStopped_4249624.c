// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade$$SetWalkerStopped
// address: 0x4249624
// body: available
// range: 0x4249624-0x42497d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42497c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42497cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42497d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_HomeCustomerParade__SetWalkerStopped(long param_1,long param_2,byte param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_78;
  undefined8 *puStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  
  if ((DAT_09516ea0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a54f8);
    FUN_03f5c2a4(&DAT_091a5500);
    FUN_03f5c2a4(&DAT_091a5508);
    FUN_03f5c2a4(&DAT_091b2f58);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516ea0 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (param_2 != 0) {
    lVar3 = UnityEngine_GameObject__get_transform(param_2,0);
    if (*(long *)(param_1 + 0x120) != 0) {
      FUN_057e185c(&local_78,*(long *)(param_1 + 0x120),DAT_091b2f58);
      uStack_58 = puStack_70;
      local_60 = local_78;
      local_50 = local_68;
      local_78 = 0;
      puStack_70 = &local_60;
      do {
        do {
          uVar2 = FUN_071bd28c(&local_60,DAT_091a5500);
          lVar1 = local_50;
          if ((uVar2 & 1) == 0) goto LAB_0424979c;
          if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar4 = *(undefined8 *)(local_50 + 0x18);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
        } while ((uVar2 & 1) == 0);
        uVar4 = *(undefined8 *)(lVar1 + 0x18);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Inequality(lVar3,uVar4,0);
        if ((uVar2 & 1) == 0) break;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = UnityEngine_Transform__IsChildOf(lVar3,*(undefined8 *)(lVar1 + 0x18),0);
      } while ((uVar2 & 1) == 0);
      *(byte *)(lVar1 + 0x74) = param_3 & 1;
LAB_0424979c:
      FUN_071bd288(&local_60,DAT_091a54f8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

