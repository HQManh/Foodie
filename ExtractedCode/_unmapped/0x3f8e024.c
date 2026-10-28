// rea decompile_all
// name: FUN_03f8e024
// address: 0x3f8e024
// body: available
// range: 0x3f8e024-0x3f8e1d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_03f8e024(int *param_1,char *param_2,int param_3,__off_t *param_4,uint param_5,
                  undefined8 param_6,undefined4 *param_7)

{
  int iVar1;
  int __fd;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  byte local_af;
  long local_90;
  
  if (param_1 == (int *)0x0) {
    iVar1 = stat(param_2,(stat *)&stack0xffffffffffffff40);
  }
  else {
    iVar1 = fstat(*param_1,(stat *)&stack0xffffffffffffff40);
  }
  if ((param_3 - 5U < 2 || param_3 == 3) && (iVar1 == -1)) {
    if (param_7 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    uVar3 = 3;
    goto LAB_03f8e1b0;
  }
  uVar4 = param_3 - 1;
  if ((uVar4 == 0) && (iVar1 == 0)) {
    if (param_7 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    uVar3 = 4;
    goto LAB_03f8e1b0;
  }
  if (iVar1 == 0) {
    if (*param_4 == 0) {
      if ((local_90 != 0) || ((local_af & 0xf0) != 0)) {
        *param_4 = local_90;
        goto joined_r0x03f8e10c;
      }
    }
    else if (local_90 <= *param_4) {
joined_r0x03f8e10c:
      if (param_1 == (int *)0x0) {
        if (uVar4 < 6) {
          uVar4 = *(uint *)(&DAT_023abc68 + (ulong)uVar4 * 4);
        }
        else {
          uVar4 = 0;
        }
        if (param_5 < 6) {
          uVar5 = *(uint *)(&DAT_023abc80 + (ulong)param_5 * 4);
        }
        else {
          uVar5 = 0;
        }
        __fd = open(param_2,uVar5 | uVar4,0x1b6);
      }
      else {
        __fd = dup(*param_1);
      }
      if (__fd != -1) {
        if ((iVar1 != 0) || (local_90 < *param_4)) {
          ftruncate(__fd,*param_4);
        }
        piVar2 = operator_new(0x50);
        *piVar2 = __fd;
        *(undefined8 *)((long)piVar2 + 0x25) = 0;
        *(undefined8 *)((long)piVar2 + 0x1d) = 0;
        piVar2[3] = 0;
        piVar2[4] = 0;
        piVar2[1] = 0;
        piVar2[2] = 0;
        piVar2[7] = 0;
        piVar2[8] = 0;
        piVar2[5] = 0;
        piVar2[6] = 0;
        piVar2[0xe] = 0;
        piVar2[0xf] = 0;
        piVar2[0xc] = 0;
        piVar2[0xd] = 0;
        piVar2[0x12] = 0;
        piVar2[0x13] = 0;
        piVar2[0x10] = 0;
        piVar2[0x11] = 0;
        *(undefined1 *)(piVar2 + 0xb) = 0;
        return piVar2;
      }
      if (param_7 == (undefined4 *)0x0) {
        return (int *)0x0;
      }
      uVar3 = 6;
      goto LAB_03f8e1b0;
    }
  }
  else if ((param_3 != 1) || (*param_4 != 0)) goto joined_r0x03f8e10c;
  if (param_7 == (undefined4 *)0x0) {
    return (int *)0x0;
  }
  uVar3 = 2;
LAB_03f8e1b0:
  *param_7 = uVar3;
  return (int *)0x0;
}

