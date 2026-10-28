// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade$$.ctor
// address: 0x4249a64
// body: available
// range: 0x4249a64-0x4249caf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4249cac to 0x865f230 UnityEngine.MonoBehaviour$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_HomeCustomerParade___ctor(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_09516ea2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f770);
    FUN_03f5c2a4(&DAT_09176aa0);
    FUN_03f5c2a4(&DAT_091aa4e0);
    FUN_03f5c2a4(&DAT_091b2f30);
    FUN_03f5c2a4(&DAT_0917b9d0);
    FUN_03f5c2a4(&DAT_0917d4b0);
    DAT_09516ea2 = 1;
  }
  cVar1 = DAT_09515ce8;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce8 = '\x01';
  }
  uVar2 = DAT_09176aa0;
  uVar3 = **(undefined8 **)(DAT_0918cb68 + 0xb8);
  *(undefined8 *)(param_1 + 0x58) = 0x3e19999a400ccccd;
  *(undefined8 *)(param_1 + 0x50) = 0x41000000c1000000;
  *(undefined8 *)(param_1 + 0x70) = 0xbf19999abf666666;
  *(undefined8 *)(param_1 + 0x68) = 0xbe800000bee66666;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = 0x3e99999a3f800000;
  *(undefined8 *)(param_1 + 0x78) = 0x3fe666663e99999a;
  *(undefined8 *)(param_1 + 0x98) = 0x3fb333333f19999a;
  *(undefined8 *)(param_1 + 0x90) = 0x40a0000040200000;
  *(undefined8 *)(param_1 + 0xa0) = 0x3f2666663f99999a;
  *(undefined8 *)(param_1 + 0xac) = 0x4120000040c00000;
  *(undefined8 *)(param_1 + 0xc4) = 0x3f19999a3f19999a;
  *(undefined8 *)(param_1 + 0xbc) = 0x3f80000040400000;
  *(undefined8 *)(param_1 + 0xdc) = 0x3f0000003eb33333;
  *(undefined8 *)(param_1 + 0xd4) = 0x3eb333333fb33333;
  *(undefined8 *)(param_1 + 0x88) = 0x3f8ccccd00000003;
  *(undefined4 *)(param_1 + 0xa8) = 0x40c00000;
  *(undefined8 *)(param_1 + 0xec) = 0xa00000005;
  *(undefined8 *)(param_1 + 0xe4) = 0x500000003;
  *(undefined8 *)(param_1 + 0xb4) = 0x13f800000;
  *(undefined8 *)(param_1 + 0xf4) = 0x3f8000003f000000;
  *(undefined8 *)(param_1 + 0xcc) = 0x400000000;
  *(undefined8 *)(param_1 + 0xfc) = 0x40c000003d75c28f;
  *(undefined4 *)(param_1 + 0x108) = 0x42c80000;
  uVar2 = thunk_FUN_03f9944c(uVar2);
  FUN_06fd76bc(uVar2,DAT_0919f770);
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  thunk_FUN_03f5d7b8(param_1 + 0x110,uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917b9d0);
  FUN_0564e1ec(uVar2,DAT_091aa4e0);
  *(undefined8 *)(param_1 + 0x118) = uVar2;
  thunk_FUN_03f5d7b8(param_1 + 0x118,uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917d4b0);
  FUN_057e0400(uVar2,DAT_091b2f30);
  *(undefined8 *)(param_1 + 0x120) = uVar2;
  thunk_FUN_03f5d7b8(param_1 + 0x120,uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917d4b0);
  FUN_057e0400(uVar2,DAT_091b2f30);
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  thunk_FUN_03f5d7b8(param_1 + 0x128,uVar2);
  UnityEngine_MonoBehaviour___ctor(param_1,0);
  return;
}

