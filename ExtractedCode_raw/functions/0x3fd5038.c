// rea decompile_all
// name: FUN_03fd5038
// address: 0x3fd5038
// body: available
// range: 0x3fd5038-0x3fd50ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd50b8 to 0x3fd4f64 FUN_03fd4f64 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd5038(ulong param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  ulong uVar5;
  
  plVar3 = (long *)(&DAT_097440c8 + (param_1 >> 0x16 & 0x7ff) * 8);
  do {
    lVar2 = *plVar3;
    plVar3 = (long *)(lVar2 + 0x2018);
  } while (*(ulong *)(lVar2 + 0x2010) != param_1 >> 0x16 && lVar2 != DAT_09535c90);
  lVar2 = *(long *)(lVar2 + (param_1 >> 0xc & 0x3ff) * 8);
  *(short *)(lVar2 + 0x1a) = (short)DAT_09748118;
  puVar4 = (&PTR_DAT_095156e0)[(ulong)*(byte *)(lVar2 + 0x18) * 4];
  if (param_2 != 0) {
    FUN_03fd4f64(param_1,lVar2);
    return;
  }
  uVar5 = *(ulong *)(lVar2 + 0x20) >> 1 & 0x7ffffffffffffff8;
  uVar1 = FUN_03fd36d4(param_1,lVar2,*(ulong *)(lVar2 + 0x20),
                       *(undefined4 *)(&DAT_095156fc + (ulong)*(byte *)(lVar2 + 0x18) * 0x20),
                       *(undefined8 *)(puVar4 + uVar5),&DAT_097485b8);
  *(undefined8 *)(puVar4 + uVar5) = uVar1;
  return;
}

