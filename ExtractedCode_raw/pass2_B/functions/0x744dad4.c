// rea decompile_all
// name: System.Text.Encoding$$get_BigEndianUnicode
// address: 0x744dad4
// body: available
// range: 0x744dad4-0x744dba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Text_Encoding__get_BigEndianUnicode(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_095210df & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183fb8);
    FUN_03f5c2a4(&DAT_0918c640);
    DAT_095210df = 1;
  }
  lVar3 = *(long *)(*(long *)(DAT_09183fb8 + 0xb8) + 0x10);
  thunk_FUN_03f6a5cc();
  if (lVar3 == 0) {
    plVar1 = (long *)thunk_FUN_03f9944c(DAT_0918c640);
    *(undefined1 *)((long)plVar1 + 0x3a) = 1;
    *(undefined1 *)((long)plVar1 + 0x21) = 1;
    System_Object___ctor(plVar1,0);
    *(undefined4 *)(plVar1 + 2) = 0x4b1;
    (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
    *(undefined1 *)((long)plVar1 + 0x3a) = 1;
    *(undefined2 *)(plVar1 + 7) = 0x100;
    thunk_FUN_03f6a5cc();
    plVar2 = (long *)(*(long *)(DAT_09183fb8 + 0xb8) + 0x10);
    *plVar2 = (long)plVar1;
    thunk_FUN_03f5d7b8(plVar2,plVar1);
  }
  uVar4 = *(undefined8 *)(*(long *)(DAT_09183fb8 + 0xb8) + 0x10);
  thunk_FUN_03f6a5cc();
  return uVar4;
}

