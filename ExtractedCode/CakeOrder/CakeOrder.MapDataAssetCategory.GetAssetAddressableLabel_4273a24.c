// rea decompile_all
// name: CakeOrder.MapDataAssetCategory$$GetAssetAddressableLabel
// address: 0x4273a24
// body: available
// range: 0x4273a24-0x4273b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4273b14 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_MapDataAssetCategory__GetAssetAddressableLabel(undefined4 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_14;
  
  if ((DAT_09517043 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0921cc98);
    FUN_03f5c2a4(&DAT_0921d2f0);
    FUN_03f5c2a4(&DAT_09219648);
    DAT_09517043 = 1;
  }
  uVar1 = CakeOrder_MapDataAssetCategory__GetCategory(param_1);
  if (uVar1 < 3) {
    return *(undefined8 *)(&PTR_DAT_089e1df8)[uVar1];
  }
  local_14 = param_1;
  uVar2 = thunk_FUN_03fc39d4(&DAT_09192640);
  uVar2 = FUN_03f5c42c(uVar2,&local_14);
  uVar3 = thunk_FUN_03fc39d4(&DAT_09208fb8);
  uVar2 = System_String__Format(uVar3,uVar2,0);
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar3 = thunk_FUN_03f9944c();
  uVar4 = thunk_FUN_03fc39d4(&DAT_09217ae0);
  System_ArgumentOutOfRangeException___ctor(uVar3,uVar4,uVar2,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091d2900);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar2);
}

