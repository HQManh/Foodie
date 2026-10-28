// rea decompile_all
// name: CakeOrder.CookingdomInappPackListDefinition$$GetStoreProductId
// address: 0x4270880
// body: available
// range: 0x4270880-0x42709bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42709b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42709b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_CookingdomInappPackListDefinition__GetStoreProductId(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  if ((DAT_09517015 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182e88);
    FUN_03f5c2a4(&DAT_09186b38);
    FUN_03f5c2a4(&DAT_09218fc8);
    DAT_09517015 = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(DAT_09182e88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(*(long *)(DAT_09182e88 + 0xb8) + 8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = param_1;
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar1 = 0;
      uVar3 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      puVar6 = (undefined8 *)(lVar5 + 0x28);
      do {
        if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar4 = *puVar6;
        local_58 = DAT_09186b38;
        uStack_50 = 0xffffffffffffffff;
        local_48 = (undefined4)puVar6[-1];
        uVar2 = System_Enum__ToString(&local_58,0);
        uVar3 = System_String__op_Equality(uVar2,param_1,0);
        if ((uVar3 & 1) != 0) break;
        uVar3 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar1 = uVar1 + 1;
        puVar6 = puVar6 + 2;
        uVar4 = param_1;
      } while ((long)uVar1 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    param_1 = System_String__Concat(DAT_09218fc8,uVar4,0);
  }
  return param_1;
}

