// rea decompile_all
// name: System.Type$$.cctor
// address: 0x75d1ff0
// body: available
// range: 0x75d1ff0-0x75d21d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75d21d4 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Type___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if ((DAT_09521e14 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0348);
    FUN_03f5c2a4(&DAT_09187fc0);
    FUN_03f5c2a4(&DAT_091882a0);
    FUN_03f5c2a4(&DAT_091dc088);
    FUN_03f5c2a4(&DAT_091dc090);
    FUN_03f5c2a4(&DAT_091dc098);
    DAT_09521e14 = 1;
  }
  lVar1 = DAT_091c0348;
  *(undefined2 *)(*(long *)(DAT_095354b8 + 0xb8) + 8) = 0x2e;
  lVar4 = *(long *)(lVar1 + 0x38);
  if (lVar4 == 0) {
    FUN_03f95ac8(lVar1);
    lVar4 = *(long *)(lVar1 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  *(undefined8 *)(*(long *)(DAT_095354b8 + 0xb8) + 0x10) = **(undefined8 **)(lVar1 + 0xb8);
  thunk_FUN_03f5d7b8();
  if (*(int *)(DAT_091882a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  *(undefined8 *)(*(long *)(DAT_095354b8 + 0xb8) + 0x18) = **(undefined8 **)(DAT_091882a0 + 0xb8);
  thunk_FUN_03f5d7b8();
  uVar2 = thunk_FUN_03f9944c(DAT_09187fc0);
  System_Reflection_MemberFilter___ctor(uVar2,0,DAT_091dc088,0);
  puVar3 = (undefined8 *)(*(long *)(DAT_095354b8 + 0xb8) + 0x20);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_09187fc0);
  System_Reflection_MemberFilter___ctor(uVar2,0,DAT_091dc098,0);
  puVar3 = (undefined8 *)(*(long *)(DAT_095354b8 + 0xb8) + 0x28);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_09187fc0);
  System_Reflection_MemberFilter___ctor(uVar2,0,DAT_091dc090,0);
  puVar3 = (undefined8 *)(*(long *)(DAT_095354b8 + 0xb8) + 0x30);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  return;
}

