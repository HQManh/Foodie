// rea decompile_all
// name: System.Buffers.StandardFormat$$Format
// address: 0x756233c
// body: available
// range: 0x756233c-0x7562437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Buffers_StandardFormat__Format(byte *param_1,ushort *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint local_24;
  
  if ((DAT_095219c2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_095219c2 = 1;
  }
  iVar2 = 0;
  if ((*param_1 != 0) && (param_3 == 3)) {
    bVar1 = param_1[1];
    local_24 = (uint)bVar1;
    *param_2 = (ushort)*param_1;
    uVar4 = (uint)bVar1;
    if (uVar4 == 0xff) {
      iVar2 = 1;
    }
    else {
      if (bVar1 < 10) {
        uVar4 = 1;
      }
      else {
        local_24 = uVar4;
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Math__DivRem(bVar1,10,&local_24,0);
        param_2[1] = (short)uVar3 + (short)((uVar3 & 0xffffffff) / 10) * -10 | 0x30;
        uVar4 = 2;
      }
      iVar2 = uVar4 + 1;
      param_2[uVar4] = (short)local_24 + 0x30;
    }
  }
  return iVar2;
}

