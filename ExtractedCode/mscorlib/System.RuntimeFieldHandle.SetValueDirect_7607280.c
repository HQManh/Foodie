// rea decompile_all
// name: thunk_FUN_03f6a994
// address: 0x7607280
// body: available
// range: 0x7607280-0x7607283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_03f6a994(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  byte abStack_60 [16];
  void *pvStack_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_48 [16];
  ulong uStack_38;
  
  lVar5 = *(long *)(param_1 + 0x18);
  uVar2 = FUN_03fb84ac(*(long *)(lVar5 + 0x10) + 0x20);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_03fb845c(*(undefined8 *)(lVar5 + 8));
    uVar3 = *(undefined8 *)(lVar5 + 8);
    lVar4 = *(long *)(param_3 + 8);
    iVar1 = *(int *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      param_4 = FUN_03f99594(param_4);
    }
    FUN_03fbaca0(uVar3,lVar4 + iVar1 + -0x10,param_4,0);
    return;
  }
  FUN_03f6321c(abStack_48,"The type ");
  FUN_03fb7b60(abStack_60,*(long *)(lVar5 + 0x10) + 0x20,2);
  FUN_03f6aab8(abStack_48,abStack_60);
  if ((abStack_60[0] & 1) != 0) {
    operator_delete(pvStack_50);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(abStack_48," is not struct");
  uVar2 = (ulong)abStack_48 | 1;
  if (((byte)abStack_48[0] & 1) != 0) {
    uVar2 = uStack_38;
  }
  uVar3 = FUN_03fa6ecc(uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_03fa5c38(uVar3,0);
}

