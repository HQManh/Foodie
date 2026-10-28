// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageShop$$OnDestroy
// address: 0x433a360
// body: available
// range: 0x433a360-0x433a41b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageShop__OnDestroy(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if ((DAT_09517712 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf690);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091977b8);
    DAT_09517712 = 1;
  }
  uVar1 = FUN_0640f598(param_1 + 0xc0,DAT_091977b8);
  if ((uVar1 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 200);
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = uVar3;
    uStack_38 = uVar4;
    local_30 = uVar2;
    FUN_04b71ee0(&local_40,DAT_091bf690);
  }
  return;
}

