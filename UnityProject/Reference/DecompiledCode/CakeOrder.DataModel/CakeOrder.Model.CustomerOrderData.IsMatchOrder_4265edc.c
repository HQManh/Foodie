// rea decompile_all
// name: CakeOrder.Model.CustomerOrderData$$IsMatchOrder
// address: 0x4265edc
// body: available
// range: 0x4265edc-0x426603f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4266038 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x426603c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint CakeOrder_Model_CustomerOrderData__IsMatchOrder(long param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_48;
  
  if ((DAT_09516fae & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3080);
    FUN_03f5c2a4(&DAT_091a3088);
    FUN_03f5c2a4(&DAT_091a3090);
    FUN_03f5c2a4(&DAT_091861f0);
    FUN_03f5c2a4(&DAT_091ad4e8);
    DAT_09516fae = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (long *)0x0;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_58,*(long *)(param_1 + 0x10),DAT_091ad4e8);
  do {
    uVar2 = FUN_071bd28c(&local_58,DAT_091a3088);
    plVar1 = local_48;
    if ((uVar2 & 1) == 0) break;
    if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *local_48;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091861f0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_04265ff8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(local_48,DAT_091861f0,1);
LAB_04265ff8:
    uVar5 = (*(code *)*puVar3)(plVar1,param_2,puVar3[1]);
  } while ((uVar5 & 1) != 0);
  FUN_071bd288(&local_58,DAT_091a3080);
  return (uVar2 ^ 1) & 1;
}

