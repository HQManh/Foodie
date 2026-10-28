// rea decompile_all
// name: FUN_03f8b454
// address: 0x3f8b454
// body: available
// range: 0x3f8b454-0x3f8b59f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_03f8b454(ushort *param_1,int param_2,uint *param_3)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar4 = (uint)uVar1;
  if (uVar1 < 5) {
    if (uVar4 == 1 || uVar1 == 0) {
      if (uVar1 == 0) goto LAB_03f8b590;
      if (uVar1 == 1) {
        *param_3 = 1;
        if (param_2 != 0) {
          iVar2 = 0;
          do {
            *(undefined1 *)((long)param_3 + (long)iVar2 + 4) =
                 *(undefined1 *)((long)param_1 + (long)iVar2 + 2);
            iVar2 = iVar2 + 1;
          } while (param_2 != iVar2);
          return 1;
        }
        return 1;
      }
    }
    else {
      if (uVar4 == 2) {
        uVar1 = param_1[1];
        *param_3 = 2;
        param_3[1] = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
        uVar4 = (*(uint *)(param_1 + 2) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 2) & 0xff00ff) << 8;
        param_3[2] = uVar4 >> 0x10 | uVar4 << 0x10;
        return 1;
      }
      if (uVar1 == 4) {
        uVar4 = 3;
        goto LAB_03f8b590;
      }
    }
  }
  else if (uVar1 < 0xc) {
    if (uVar4 == 5) {
      uVar4 = 6;
      goto LAB_03f8b590;
    }
    if (uVar1 == 10) {
      uVar1 = param_1[1];
      lVar3 = 0;
      *param_3 = 7;
      *(ushort *)((long)param_3 + 6) = uVar1;
      do {
        *(undefined1 *)((long)param_3 + lVar3 + 0xc) = *(undefined1 *)((long)param_1 + lVar3 + 8);
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x10);
      *(char *)(param_3 + 7) = (char)*(undefined4 *)(param_1 + 0xc);
      *(char *)((long)param_3 + 0x1d) = (char)((uint)*(undefined4 *)(param_1 + 0xc) >> 8);
      *(char *)((long)param_3 + 0x1e) = (char)param_1[0xd];
      *(undefined1 *)((long)param_3 + 0x1f) = *(undefined1 *)((long)param_1 + 0x1b);
      return 1;
    }
  }
  else {
    if (uVar1 == 0xc) {
      uVar4 = 5;
      goto LAB_03f8b590;
    }
    if (uVar4 == 0x16) {
      uVar4 = 4;
      goto LAB_03f8b590;
    }
    if (uVar4 == 0x17) {
      uVar4 = 8;
      goto LAB_03f8b590;
    }
  }
  uVar4 = 0xffffffff;
LAB_03f8b590:
  *param_3 = uVar4;
  return 0;
}

