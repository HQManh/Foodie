// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade$$Stop
// address: 0x4246f14
// body: available
// range: 0x4246f14-0x4247113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4247108 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x424710c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4247110 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_HomeCustomerParade__Stop(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_78;
  undefined8 *puStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  long local_50;
  
  if ((DAT_09516e7e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a54f8);
    FUN_03f5c2a4(&DAT_091a5500);
    FUN_03f5c2a4(&DAT_091a5508);
    FUN_03f5c2a4(&DAT_091b2f48);
    FUN_03f5c2a4(&DAT_091b2f58);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516e7e = 1;
  }
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  if (*(char *)(param_1 + 0x130) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x130) = 0;
  UnityEngine_MonoBehaviour__StopAllCoroutines(param_1,0);
  *(undefined1 *)(param_1 + 0x131) = 0;
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  thunk_FUN_03f5d7b8(param_1 + 0x140,0);
  if (*(long *)(param_1 + 0x120) != 0) {
    FUN_057e185c(&local_78,*(long *)(param_1 + 0x120),DAT_091b2f58);
    local_50 = local_68;
    puStack_58 = puStack_70;
    local_60 = local_78;
    local_78 = 0;
    puStack_70 = &local_60;
    while (uVar2 = FUN_071bd28c(&local_60,DAT_091a5500), lVar3 = local_50, (uVar2 & 1) != 0) {
      AnhPD_FoodOrder_HomeCustomerParade__DetachFootprint(param_1,local_50);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = *(undefined8 *)(lVar3 + 0x18);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar3 + 0x18),0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Object__Destroy(uVar4,0);
      }
    }
    FUN_071bd288(&local_60,DAT_091a54f8);
    lVar3 = *(long *)(param_1 + 0x120);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x18);
      *(undefined4 *)(lVar3 + 0x18) = 0;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
      }
      lVar3 = *(long *)(param_1 + 0x128);
      if (lVar3 != 0) {
        iVar1 = *(int *)(lVar3 + 0x18);
        *(undefined4 *)(lVar3 + 0x18) = 0;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (iVar1 < 1) {
          return;
        }
        System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

