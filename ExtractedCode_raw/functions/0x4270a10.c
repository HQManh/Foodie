// rea decompile_all
// name: CakeOrder.CookingdomInappPackListDefinition$$ToSku
// address: 0x4270a10
// body: available
// range: 0x4270a10-0x4270b67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4270b60 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4270b64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_CookingdomInappPackListDefinition__ToSku(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  if ((DAT_09517017 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182e88);
    FUN_03f5c2a4(&DAT_09186b38);
    FUN_03f5c2a4(&DAT_09218fc8);
    DAT_09517017 = 1;
  }
  uVar2 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar2 & 1) != 0) {
    return param_1;
  }
  if (param_1 != 0) {
    uVar2 = System_String__StartsWith(param_1,DAT_09218fc8,4,0);
    if ((uVar2 & 1) != 0) {
      if (DAT_09218fc8 == 0) goto LAB_04270b64;
      param_1 = System_String__Substring(param_1,*(undefined4 *)(DAT_09218fc8 + 0x10),0);
    }
    if (*(int *)(DAT_09182e88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(*(long *)(DAT_09182e88 + 0xb8) + 8);
    if (lVar4 != 0) {
      if ((int)*(ulong *)(lVar4 + 0x18) < 1) {
        return param_1;
      }
      uVar2 = 0;
      uVar3 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      puVar5 = (undefined8 *)(lVar4 + 0x28);
      while( true ) {
        if (uVar3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar1 = puVar5[-1];
        uVar3 = System_String__op_Equality(*puVar5,param_1,0);
        if ((uVar3 & 1) != 0) break;
        uVar3 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar2 = uVar2 + 1;
        puVar5 = puVar5 + 2;
        if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar2) {
          return param_1;
        }
      }
      local_38 = (undefined4)uVar1;
      local_48 = DAT_09186b38;
      uStack_40 = 0xffffffffffffffff;
      lVar4 = System_Enum__ToString(&local_48,0);
      return lVar4;
    }
  }
LAB_04270b64:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

