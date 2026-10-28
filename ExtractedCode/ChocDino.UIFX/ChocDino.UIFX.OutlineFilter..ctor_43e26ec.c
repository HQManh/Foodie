// rea decompile_all
// name: ChocDino.UIFX.OutlineFilter$$.ctor
// address: 0x43e26ec
// body: available
// range: 0x43e26ec-0x43e27ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e27ec to 0x43c5774 ChocDino.UIFX.FilterBase$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_OutlineFilter___ctor(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_09517d3c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182738);
    FUN_03f5c2a4(&DAT_091845d0);
    FUN_03f5c2a4(&DAT_09184de0);
    DAT_09517d3c = 1;
  }
  *(undefined8 *)(param_1 + 0x1c8) = 0x240800000;
  lVar1 = DAT_09182738;
  *(undefined8 *)(param_1 + 0x1d4) = 0x3f80000040000000;
  *(undefined8 *)(param_1 + 0x1e8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = ChocDino_UIFX_ColorUtils__GetBuiltInGradient(0,0);
  *(undefined8 *)(param_1 + 0x1f0) = uVar2;
  thunk_FUN_03f5d7b8(param_1 + 0x1f0,uVar2);
  uVar2 = DAT_09184de0;
  *(undefined4 *)(param_1 + 0x1fc) = 2;
  uVar2 = thunk_FUN_03f9944c(uVar2);
  ChocDino_UIFX_GradientTexture___ctor(uVar2,0x80,0);
  *(undefined8 *)(param_1 + 0x218) = uVar2;
  thunk_FUN_03f5d7b8(param_1 + 0x218,uVar2);
  if (*(int *)(DAT_091845d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  ChocDino_UIFX_FilterBase___ctor(param_1,0);
  return;
}

