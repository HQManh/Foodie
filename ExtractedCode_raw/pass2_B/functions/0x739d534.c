// rea decompile_all
// name: FUN_0739d534
// address: 0x739d534
// body: available
// range: 0x739d534-0x739d6d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x739d600 to 0x6097b68 FUN_06097b68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x739d6d0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0739d534(char *param_1,ulong param_2,long param_3)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar4;
  
  if ((long)param_2 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar7 = thunk_FUN_03f9944c();
    puVar4 = &DAT_09219b28;
LAB_0739d6b4:
    uVar3 = thunk_FUN_03fc39d4(puVar4);
    System_ArgumentOutOfRangeException___ctor(uVar7,uVar3,0);
  }
  else {
    if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    lVar6 = *(long *)(param_1 + 0x78);
    if ((long)(param_2 | 0x8000000000000000) <= lVar6) {
      lVar2 = *(long *)(param_3 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        FUN_03f95a6c();
        lVar2 = *(long *)(param_3 + 0x20);
      }
      *(ulong *)(param_1 + 0x78) = lVar6 - param_2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      iVar5 = *(int *)(param_1 + 0x70);
      if ((long)iVar5 < (long)param_2) {
        if (*param_1 != '\0') {
          lVar6 = *(long *)(param_3 + 0x20);
          uVar1 = *(ushort *)(lVar6 + 0x135);
          if ((uVar1 & 1) == 0) {
            FUN_03f95a6c();
            lVar6 = *(long *)(param_3 + 0x20);
            uVar1 = *(ushort *)(lVar6 + 0x135);
          }
          uVar7 = *(undefined8 *)(param_1 + 0x78);
          if ((uVar1 & 1) == 0) {
            lVar6 = FUN_03f95a6c();
          }
          FUN_06097b68(param_1,uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x128));
          return;
        }
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar7 = thunk_FUN_03f9944c();
        puVar4 = (undefined8 *)&DAT_0920c030;
        goto LAB_0739d6b4;
      }
      if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
        iVar5 = *(int *)(param_1 + 0x70);
      }
      if ((param_2 >> 0x1f == 0) && (-0x80000001 < (long)((long)iVar5 - param_2))) {
        if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        *(int *)(param_1 + 0x70) = iVar5 - (int)param_2;
        param_1[0x50] = '\x01';
        return;
      }
    }
    uVar7 = FUN_03f5c560();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,param_3);
}

