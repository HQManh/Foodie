// rea decompile_all
// name: FUN_03fc3b50
// address: 0x3fc3b50
// body: available
// range: 0x3fc3b50-0x3fc3ca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc3b50(int param_1,long param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_c8 [80];
  undefined4 local_78 [2];
  long local_70;
  undefined4 local_68;
  
  if (param_1 == 0) {
    bVar3 = false;
    bVar2 = false;
    *(undefined4 *)(param_2 + 0xf8) = param_3;
  }
  else if (param_1 == 2) {
    bVar2 = false;
    bVar3 = true;
    *(undefined4 *)(param_2 + 0x110) = param_3;
  }
  else if (param_1 == 1) {
    bVar3 = false;
    *(undefined4 *)(param_2 + 0x10c) = param_3;
    bVar2 = true;
  }
  else {
    bVar3 = false;
    bVar2 = false;
  }
  if (((*(byte *)(param_2 + 0x118) >> 4 & 1) == 0) && (*(short *)(param_2 + 0x124) != 0)) {
    lVar6 = 0;
    uVar7 = 0;
    lVar8 = 0;
    do {
      lVar9 = *(long *)(param_2 + 0x80);
      lVar1 = lVar9 + lVar6;
      if (((param_1 != 0) || ((*(byte *)(*(long *)(lVar1 + 8) + 8) >> 4 & 1) == 0)) &&
         ((!bVar2 || (uVar4 = FUN_03fbb4e4(lVar1), (uVar4 & 1) != 0)))) {
        if (bVar3) {
          uVar4 = FUN_03fbb510(lVar1);
          if ((uVar4 & 1) == 0) goto LAB_03fc3c74;
          lVar5 = *param_4;
          *(undefined4 *)(lVar9 + lVar6 + 0x18) = 0xffffffff;
          local_78[0] = 0;
          local_68 = (undefined4)*(undefined8 *)(lVar5 + lVar8 * 8);
          local_70 = lVar1;
          FUN_03fca8c8(&DAT_095359f8,1);
          FUN_03fcaa1c(auStack_c8,&DAT_095359f8,local_78);
        }
        else {
          *(int *)(lVar9 + lVar6 + 0x18) = (int)*(undefined8 *)(*param_4 + lVar8 * 8);
        }
        lVar8 = lVar8 + 1;
      }
LAB_03fc3c74:
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x20;
    } while (uVar7 < *(ushort *)(param_2 + 0x124));
  }
  return;
}

