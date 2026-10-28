// rea decompile_all
// name: thunk_FUN_03f6f550
// address: 0x75f8900
// body: available
// range: 0x75f8900-0x75f8903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 thunk_FUN_03f6f550(long param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + 8);
  if ((uVar3 >> 0x1d & 1) != 0) {
LAB_03f6f5b8:
    return 1;
  }
  do {
    switch(uVar3 >> 0x10 & 0xff) {
    case 1:
    case 0xf:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x18:
    case 0x19:
    case 0x1c:
    case 0x1d:
    case 0x1e:
      goto LAB_03f6f5b8;
    case 2:
      return 3;
    case 3:
      return 4;
    case 4:
      return 5;
    case 5:
      return 6;
    case 6:
      return 7;
    case 7:
      return 8;
    case 8:
      return 9;
    case 9:
      return 10;
    case 10:
      return 0xb;
    case 0xb:
      return 0xc;
    case 0xc:
      return 0xd;
    case 0xd:
      return 0xe;
    case 0xe:
      return 0x12;
    default:
                    /* WARNING: Subroutine does not return */
      abort();
    case 0x11:
      uVar2 = FUN_03fb8604(*(undefined8 *)(param_1 + 0x10));
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_03fb86f8(*(undefined8 *)(param_1 + 0x10));
        if ((uVar2 & 1) != 0) {
          return 0xf;
        }
        uVar2 = FUN_03fb8698(*(undefined8 *)(param_1 + 0x10));
        if ((uVar2 & 1) != 0) {
          return 0x10;
        }
        return 1;
      }
      thunk_FUN_03fc3840();
      lVar1 = FUN_03fbeb20();
      uVar3 = *(uint *)(lVar1 + 8);
      break;
    case 0x12:
      uVar2 = FUN_03fb8638(*(undefined8 *)(param_1 + 0x10));
      if ((uVar2 & 1) == 0) {
        return 1;
      }
      return 2;
    }
  } while( true );
}

