// rea decompile_all
// name: FUN_03fdad34
// address: 0x3fdad34
// body: available
// range: 0x3fdad34-0x3fdafcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fdaf8c to 0x3fdb074 FUN_03fdb074 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_03fdad34(long param_1,uint param_2,int param_3,uint param_4,uint param_5,uint param_6,
            char *param_7,int param_8)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  undefined4 uVar11;
  
  if (param_7 == (char *)0x0) {
    return 0xfffffffa;
  }
  if (param_8 != 0x70) {
    return 0xfffffffa;
  }
  if (*param_7 != '1') {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
LAB_03fdade0:
    uVar7 = 0xfffffffe;
  }
  else {
    pcVar10 = *(code **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (pcVar10 == (code *)0x0) {
      pcVar10 = (code *)&LAB_03fda69c;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined1 **)(param_1 + 0x40) = &LAB_03fda69c;
    }
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined1 **)(param_1 + 0x48) = &LAB_03fda6a4;
    }
    uVar2 = 6;
    if (param_2 != 0xffffffff) {
      uVar2 = param_2;
    }
    if ((int)param_4 < 0) {
      if (param_4 < 0xfffffff1) goto LAB_03fdade0;
      uVar11 = 0;
      param_4 = -param_4;
      bVar6 = true;
    }
    else if (param_4 < 0x10) {
      bVar6 = false;
      uVar11 = 1;
    }
    else {
      uVar11 = 2;
      bVar6 = true;
      param_4 = param_4 - 0x10;
    }
    uVar7 = 0xfffffffe;
    if (((((param_6 < 5) && (uVar2 < 10)) && (param_3 == 8)) &&
        ((0xfffffff6 < param_5 - 10 && (7 < param_4)))) && (param_4 < 0x10)) {
      bVar1 = false;
      if (param_4 == 8) {
        bVar1 = bVar6;
      }
      if (!bVar1) {
        plVar8 = (long *)(*pcVar10)(*(undefined8 *)(param_1 + 0x50),1,0x1740);
        if (plVar8 != (long *)0x0) {
          *(undefined4 *)(plVar8 + 1) = 0x2a;
          uVar3 = 9;
          if (param_4 != 8) {
            uVar3 = param_4;
          }
          iVar4 = 1 << (ulong)(uVar3 & 0x1f);
          *(long **)(param_1 + 0x38) = plVar8;
          *(int *)(plVar8 + 10) = iVar4;
          *(uint *)((long)plVar8 + 0x54) = uVar3;
          *(int *)(plVar8 + 0xb) = iVar4 + -1;
          iVar5 = 0x80 << (ulong)(param_5 & 0x1f);
          *plVar8 = param_1;
          *(undefined4 *)(plVar8 + 6) = uVar11;
          plVar8[7] = 0;
          *(int *)((long)plVar8 + 0x84) = iVar5;
          *(uint *)(plVar8 + 0x11) = param_5 + 7;
          pcVar10 = *(code **)(param_1 + 0x40);
          uVar7 = *(undefined8 *)(param_1 + 0x50);
          *(int *)((long)plVar8 + 0x8c) = iVar5 + -1;
          *(uint *)(plVar8 + 0x12) = (param_5 + 9 & 0xff) / 3;
          lVar9 = (*pcVar10)(uVar7,iVar4,2);
          uVar7 = *(undefined8 *)(param_1 + 0x50);
          pcVar10 = *(code **)(param_1 + 0x40);
          plVar8[0xc] = lVar9;
          lVar9 = (*pcVar10)(uVar7,(int)plVar8[10],2);
          uVar7 = *(undefined8 *)(param_1 + 0x50);
          pcVar10 = *(code **)(param_1 + 0x40);
          plVar8[0xe] = lVar9;
          lVar9 = (*pcVar10)(uVar7,*(undefined4 *)((long)plVar8 + 0x84),2);
          plVar8[0xf] = lVar9;
          uVar7 = *(undefined8 *)(param_1 + 0x50);
          iVar4 = 0x40 << (ulong)(param_5 & 0x1f);
          pcVar10 = *(code **)(param_1 + 0x40);
          plVar8[0x2e7] = 0;
          *(int *)(plVar8 + 0x2e1) = iVar4;
          lVar9 = (*pcVar10)(uVar7,iVar4,4);
          uVar3 = *(uint *)(plVar8 + 0x2e1);
          plVar8[2] = lVar9;
          plVar8[3] = (ulong)uVar3 << 2;
          if (((plVar8[0xc] != 0) && (plVar8[0xe] != 0)) && ((plVar8[0xf] != 0 && (lVar9 != 0)))) {
            *(uint *)((long)plVar8 + 0xc4) = uVar2;
            *(uint *)(plVar8 + 0x19) = param_6;
            plVar8[0x2e0] = lVar9 + (ulong)uVar3;
            *(uint *)(plVar8 + 0x2e2) = uVar3 * 3 + -3;
            *(undefined1 *)(plVar8 + 9) = 8;
            uVar7 = FUN_03fdb074(param_1);
            return uVar7;
          }
          *(undefined4 *)(plVar8 + 1) = 0x29a;
          *(char **)(param_1 + 0x30) = "insufficient memory";
          FUN_03fdafcc(param_1);
        }
        uVar7 = 0xfffffffc;
      }
    }
  }
  return uVar7;
}

