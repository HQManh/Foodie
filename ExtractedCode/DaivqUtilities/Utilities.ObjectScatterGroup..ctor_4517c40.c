// rea decompile_all
// name: Utilities.ObjectScatterGroup$$.ctor
// address: 0x4517c40
// body: available
// range: 0x4517c40-0x4517d43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4517d40 to 0x865f230 UnityEngine.MonoBehaviour$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_ObjectScatterGroup___ctor(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_09518574 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184da0);
    DAT_09518574 = 1;
  }
  cVar1 = DAT_09515ce8;
  *(undefined8 *)(param_1 + 0x30) = 0x500000003;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce8 = '\x01';
  }
  cVar1 = DAT_095185d4;
  *(undefined8 *)(param_1 + 0x3c) = **(undefined8 **)(DAT_0918cb68 + 0xb8);
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb90);
    DAT_095185d4 = '\x01';
  }
  uVar2 = DAT_09184da0;
  uVar3 = *(undefined8 *)(*(long *)(DAT_0918cb90 + 0xb8) + 8);
  *(undefined8 *)(param_1 + 0x4c) = 0x3f0000003f000000;
  *(undefined8 *)(param_1 + 100) = 0x3f8ccccd3f666666;
  *(undefined8 *)(param_1 + 0x5c) = 0x43b4000000000000;
  *(undefined8 *)(param_1 + 0x44) = uVar3;
  uVar2 = thunk_FUN_03f9944c(uVar2);
  UnityEngine_Gradient___ctor(uVar2,0);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x70),uVar2);
  UnityEngine_MonoBehaviour___ctor(param_1,0);
  return;
}

