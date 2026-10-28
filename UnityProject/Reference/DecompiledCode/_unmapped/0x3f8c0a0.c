// rea decompile_all
// name: FUN_03f8c0a0
// address: 0x3f8c0a0
// body: available
// range: 0x3f8c0a0-0x3f8c30b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f8c0a0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 < 0x29) {
    if (param_1 == 0) {
      uVar1 = param_2 - 1;
      *param_3 = 0;
      if (0xd < uVar1) {
        return 0xffffffff;
      }
      if ((0x3f0fU >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
        return 0xffffffff;
      }
      uVar2 = *(undefined4 *)(&DAT_023abc24 + (ulong)uVar1 * 4);
      goto LAB_03f8c300;
    }
    if (param_1 != 6) {
      return 0xffffffff;
    }
    *param_3 = 6;
    if (param_2 != 1) {
      return 0xffffffff;
    }
LAB_03f8c0c8:
    uVar2 = 1;
    goto LAB_03f8c300;
  }
  if (param_1 == 0x29) {
    *param_3 = 0x29;
    if (0xb < param_2) {
      if (0x12 < param_2) {
        if ((param_2 != 0x13) && (param_2 != 0x1b)) {
          return 0xffffffff;
        }
        uVar2 = 0x1a;
        goto LAB_03f8c300;
      }
      if (param_2 != 0xc) {
        if (param_2 != 0xd) {
          return 0xffffffff;
        }
LAB_03f8c2c4:
        uVar2 = 0x15;
        goto LAB_03f8c300;
      }
LAB_03f8c2bc:
      uVar2 = 0x14;
      goto LAB_03f8c300;
    }
    if (param_2 == 9) {
      uVar2 = 0x11;
      goto LAB_03f8c300;
    }
    if (param_2 != 10) {
      if (param_2 != 0xb) {
        return 0xffffffff;
      }
LAB_03f8c1d0:
      uVar2 = 0x13;
      goto LAB_03f8c300;
    }
LAB_03f8c24c:
    uVar2 = 0x12;
  }
  else {
    if (param_1 != 0xffff) {
      return 0xffffffff;
    }
    *param_3 = 1;
    if (param_2 < 0x100) {
      uVar2 = 0xd;
      if (param_2 < 8) {
        if (param_2 < 1) {
          if (param_2 == -0x81) goto LAB_03f8c300;
          if (param_2 != -5) {
            return 0xffffffff;
          }
        }
        else {
          if (param_2 == 1) goto LAB_03f8c0c8;
          if (param_2 == 2) {
            uVar2 = 0x1e;
            goto LAB_03f8c300;
          }
          if (param_2 != 4) {
            return 0xffffffff;
          }
        }
        uVar2 = 2;
        goto LAB_03f8c300;
      }
      if (param_2 < 0x20) {
        if (param_2 == 8) {
          uVar2 = 9;
        }
        else {
          if (param_2 != 0x10) {
            return 0xffffffff;
          }
          uVar2 = 5;
        }
        goto LAB_03f8c300;
      }
      if (param_2 == 0x20) {
        uVar2 = 6;
        goto LAB_03f8c300;
      }
      if (param_2 != 0x40) {
        if (param_2 != 0x80) {
          return 0xffffffff;
        }
        goto LAB_03f8c300;
      }
    }
    else {
      if (param_2 < 0x1005) {
        if (param_2 < 0x1002) {
          if (param_2 == 0x100) {
            uVar2 = 10;
          }
          else {
            if (param_2 != 0x1001) {
              return 0xffffffff;
            }
            uVar2 = 7;
          }
          goto LAB_03f8c300;
        }
        if (param_2 == 0x1002) {
          uVar2 = 8;
          goto LAB_03f8c300;
        }
        if (param_2 == 0x1003) goto LAB_03f8c1d0;
        if (param_2 != 0x1004) {
          return 0xffffffff;
        }
        goto LAB_03f8c24c;
      }
      if (param_2 < 0x1007) {
        if (param_2 == 0x1005) goto LAB_03f8c2c4;
        if (param_2 != 0x1006) {
          return 0xffffffff;
        }
        goto LAB_03f8c2bc;
      }
      if (param_2 == 0x1007) {
        uVar2 = 4;
        goto LAB_03f8c300;
      }
      if (param_2 == 0x1008) {
        uVar2 = 3;
        goto LAB_03f8c300;
      }
      if (param_2 != 0x7fffffff) {
        return 0xffffffff;
      }
    }
    uVar2 = 0x80;
  }
LAB_03f8c300:
  *param_4 = uVar2;
  return 0;
}

