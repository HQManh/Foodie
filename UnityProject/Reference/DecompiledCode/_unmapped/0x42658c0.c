// rea decompile_all
// name: FUN_042658c0
// address: 0x42658c0
// body: available
// range: 0x42658c0-0x4265b7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4265998 to 0x60985d4 FUN_060985d4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4265b44 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_042658c0(char *param_1,ulong param_2,long param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = (int)param_2;
  if (param_2 >> 0x1f == 0) {
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_03f95a6c();
      uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    if ((uVar1 & 1) == 0) {
      FUN_03f95a6c();
      uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    }
    if ((uVar1 & 1) == 0) {
      FUN_03f95a6c();
    }
    iVar3 = *(int *)(param_1 + 0x70);
    lVar4 = (long)(int)uVar6 - (long)iVar3;
    if (lVar4 == (int)lVar4) {
      if ((int)uVar6 - iVar3 <= iVar5) goto LAB_04265960;
      if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
        iVar3 = *(int *)(param_1 + 0x70);
      }
      if ((long)((long)iVar3 + param_2) < 0x80000000) {
        lVar4 = *(long *)(param_3 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          FUN_03f95a6c();
          lVar4 = *(long *)(param_3 + 0x20);
        }
        *(int *)(param_1 + 0x70) = iVar3 + iVar5;
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        lVar4 = *(long *)(param_1 + 0x78);
        if ((lVar4 <= (long)(param_2 ^ 0x7fffffffffffffff)) &&
           ((-1 < lVar4 || (-0x8000000000000000 - lVar4 <= (long)param_2)))) {
          if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          *(ulong *)(param_1 + 0x78) = lVar4 + param_2;
          return;
        }
      }
    }
  }
  else {
LAB_04265960:
    lVar4 = *(long *)(param_3 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    if (*param_1 != '\0') {
      if ((uVar1 & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      FUN_060985d4(param_1,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x150));
      return;
    }
    if ((uVar1 & 1) == 0) {
      FUN_03f95a6c();
      uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    if ((uVar1 & 1) == 0) {
      FUN_03f95a6c();
      uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    }
    if ((uVar1 & 1) == 0) {
      FUN_03f95a6c();
    }
    iVar3 = *(int *)(param_1 + 0x70);
    lVar4 = (long)(int)uVar6 - (long)iVar3;
    if ((lVar4 == (int)lVar4) && ((long)param_2 < 0x80000000)) {
      if ((int)uVar6 - iVar3 != iVar5) {
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar6 = thunk_FUN_03f9944c();
        uVar2 = thunk_FUN_03fc39d4(&DAT_09219b28);
        System_ArgumentOutOfRangeException___ctor(uVar6,uVar2,0);
        goto LAB_04265b40;
      }
      if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
        iVar3 = *(int *)(param_1 + 0x70);
      }
      if ((long)iVar3 + (long)iVar5 == (long)(int)((long)iVar3 + (long)iVar5)) {
        lVar4 = *(long *)(param_3 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          FUN_03f95a6c();
          lVar4 = *(long *)(param_3 + 0x20);
        }
        *(int *)(param_1 + 0x70) = iVar3 + iVar5;
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        lVar4 = *(long *)(param_1 + 0x78);
        if ((((long)param_2 < 0) || (lVar4 <= (long)(param_2 ^ 0x7fffffffffffffff))) &&
           ((-1 < lVar4 || (-0x8000000000000000 - lVar4 <= (long)param_2)))) {
          if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          *(ulong *)(param_1 + 0x78) = lVar4 + param_2;
          param_1[0x50] = '\0';
          return;
        }
      }
    }
  }
  uVar6 = FUN_03f5c560();
LAB_04265b40:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,param_3);
}

