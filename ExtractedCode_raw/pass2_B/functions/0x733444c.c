// rea decompile_all
// name: IngameDebugConsole.DebugLogConsole$$ParseArray
// address: 0x733444c
// body: available
// range: 0x733444c-0x7334823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73345d4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7334810 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7334814 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7334820 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint IngameDebugConsole_DebugLogConsole__ParseArray
               (undefined8 param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  int iVar11;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  
  if ((DAT_09520640 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183668);
    FUN_03f5c2a4(&DAT_09185f80);
    FUN_03f5c2a4(&DAT_091b0568);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09180318);
    DAT_09520640 = 1;
  }
  local_60 = 0;
  local_58 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0478(lVar2,2,DAT_091b0568);
  if (*(int *)(DAT_09183668 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  IngameDebugConsole_DebugLogConsole__FetchArgumentsFromCommand(param_1,lVar2);
  plVar3 = (long *)FUN_03f5c394(DAT_09180318,1);
  if (lVar2 == 0) {
LAB_07334810:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_64 = *(undefined4 *)(lVar2 + 0x18);
  lVar4 = FUN_03f5c42c(DAT_09535420,&local_64);
  if (plVar3 == (long *)0x0) goto LAB_07334810;
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
    uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,0);
  }
  if ((int)plVar3[3] == 0) {
LAB_07334814:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar3[4] = lVar4;
  thunk_FUN_03f5d7b8(plVar3 + 4,lVar4);
  lVar5 = System_Activator__CreateInstance(param_2,plVar3,0);
  lVar4 = DAT_09185f80;
  if (lVar5 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = (long *)thunk_FUN_03f99350(lVar5,DAT_09185f80);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar5,lVar4);
    }
  }
  *param_3 = plVar3;
  thunk_FUN_03f5d7b8(param_3,plVar3);
  if (param_2 == (long *)0x0) goto LAB_07334810;
  uVar6 = System_Type__get_IsArray(param_2,0);
  lVar4 = *param_2;
  if ((uVar6 & 1) == 0) {
    lVar4 = (**(code **)(lVar4 + 0x488))(param_2,*(undefined8 *)(lVar4 + 0x490));
    if (lVar4 == 0) goto LAB_07334810;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_07334814;
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar7 = *(undefined8 *)(lVar4 + 0x20);
      iVar11 = 0;
      do {
        uVar8 = FUN_057e0998(lVar2,iVar11,DAT_091b0610);
        if (*(int *)(DAT_09183668 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183668);
        }
        uVar1 = IngameDebugConsole_DebugLogConsole__ParseArgument(uVar8,uVar7,&local_60);
        uVar8 = local_60;
        if ((uVar1 & 1) == 0) goto LAB_073347ec;
        if (plVar3 == (long *)0x0) goto LAB_07334810;
        lVar4 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09185f80) {
              puVar9 = (undefined8 *)(lVar4 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_073347c0;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185f80,2);
LAB_073347c0:
        (*(code *)*puVar9)(plVar3,uVar8,puVar9[1]);
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(lVar2 + 0x18));
      goto LAB_073347f0;
    }
  }
  else {
    uVar7 = (**(code **)(lVar4 + 0x448))(param_2,*(undefined8 *)(lVar4 + 0x450));
    if (0 < *(int *)(lVar2 + 0x18)) {
      iVar11 = 0;
      do {
        uVar8 = FUN_057e0998(lVar2,iVar11,DAT_091b0610);
        if (*(int *)(DAT_09183668 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183668);
        }
        uVar1 = IngameDebugConsole_DebugLogConsole__ParseArgument(uVar8,uVar7,&local_58);
        uVar8 = local_58;
        if ((uVar1 & 1) == 0) goto LAB_073347ec;
        if (plVar3 == (long *)0x0) goto LAB_07334810;
        lVar4 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09185f80) {
              puVar9 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_073346c8;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185f80,1);
LAB_073346c8:
        (*(code *)*puVar9)(plVar3,iVar11,uVar8,puVar9[1]);
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(lVar2 + 0x18));
      goto LAB_073347f0;
    }
  }
  uVar1 = 1;
LAB_073347f0:
  return uVar1 & 1;
LAB_073347ec:
  uVar1 = 0;
  goto LAB_073347f0;
}

