// rea decompile_all
// name: FUN_03fc35ac
// address: 0x3fc35ac
// body: available
// range: 0x3fc35ac-0x3fc36f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fc35ac(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 *local_58 [3];
  ulong local_40 [3];
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x38) + 0x30);
  if (uVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x38);
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[0] = (ulong)*(uint *)(param_2 + 0x48);
  local_58[0] = &LAB_03fc36f8;
  auVar6 = FUN_03fca610(lVar2,lVar2 + (ulong)uVar1 * 0x18,local_40,local_58,&uStack_21);
  lVar3 = auVar6._8_8_;
  lVar2 = auVar6._0_8_;
  if (lVar3 - lVar2 == 0x18) {
    if (*(long *)(param_2 + 0x40) != 0) {
      FUN_03fac694(local_58,lVar2);
      lVar3 = FUN_03f7b068(local_58);
      if (*(long *)(lVar3 + 0x40) == 0) {
        return 0;
      }
      lVar5 = *(long *)(param_2 + 0x40);
      if ((*(long *)(lVar5 + 8) != 0) && (*(long *)(*(long *)(lVar3 + 0x40) + 8) != 0)) {
        uVar4 = FUN_03f7fabc();
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        lVar5 = *(long *)(param_2 + 0x40);
      }
      if (((*(long *)(lVar5 + 0x10) != 0) && (*(long *)(*(long *)(lVar3 + 0x40) + 0x10) != 0)) &&
         (uVar4 = FUN_03f7fabc(), (uVar4 & 1) == 0)) {
        return 0;
      }
    }
  }
  else {
    if (lVar3 - lVar2 < 0x19 || lVar2 == lVar3) {
      return 0;
    }
    while( true ) {
      uVar4 = **(ulong **)(lVar2 + 8);
      if ((uVar4 & 1) != 0) {
        FUN_03fac694(local_58,lVar2);
        uVar4 = FUN_03f7b068(local_58);
      }
      if (uVar4 == param_2) break;
      lVar2 = lVar2 + 0x18;
      if (lVar2 == lVar3) {
        return 0;
      }
    }
  }
  if (*(int *)(lVar2 + 4) == -1) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(DAT_09535b78 + 8) + (long)*(int *)(lVar2 + 4) * 8);
}

