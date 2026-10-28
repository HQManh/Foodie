// rea decompile_all
// name: System.Threading.Thread$$JoinInternal
// address: 0x76254ac
// body: available
// range: 0x76254ac-0x76254af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Threading_Thread__JoinInternal(long param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_03faf5a0();
  if ((uVar1 >> 3 & 1) == 0) {
    lVar3 = FUN_03faa828();
    FUN_03f6a22c(*(undefined8 *)(lVar3 + 0x10),0x20);
    iVar2 = FUN_03f87080(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),param_2);
    FUN_03faf4b0(*(undefined8 *)(lVar3 + 0x10),0x20);
    return iVar2 == 0;
  }
  uVar4 = FUN_03fa7000("Thread has not been started.");
                    /* WARNING: Subroutine does not return */
  FUN_03fa5c38(uVar4,0);
}

