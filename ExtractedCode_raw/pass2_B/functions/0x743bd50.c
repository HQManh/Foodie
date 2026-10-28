// rea decompile_all
// name: System.Text.Latin1Encoding$$GetByteCount
// address: 0x743bd50
// body: available
// range: 0x743bd50-0x743bf6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743bf6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Text_Latin1Encoding__GetByteCount(long param_1,ushort *param_2,int param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ushort uVar3;
  int iVar4;
  long *plVar5;
  short sVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *local_58;
  
  if ((DAT_09521060 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183fa8);
    DAT_09521060 = 1;
  }
  local_58 = (ushort *)0x0;
  if (param_4 == 0) {
    plVar5 = *(long **)(param_1 + 0x28);
    if ((plVar5 != (long *)0x0) && (*plVar5 == DAT_09183fa8)) {
      sVar6 = 0;
      goto LAB_0743bdf8;
    }
    puVar7 = param_2 + param_3;
  }
  else {
    plVar5 = *(long **)(param_4 + 0x10);
    sVar6 = *(short *)(param_4 + 0x20);
    if ((plVar5 != (long *)0x0) && (*plVar5 == DAT_09183fa8)) {
LAB_0743bdf8:
      iVar4 = (**(code **)(DAT_09183fa8 + 0x188))(plVar5,*(undefined8 *)(DAT_09183fa8 + 400));
      if (iVar4 == 1) {
        if (sVar6 != 0) {
          param_3 = param_3 + 1;
        }
        return param_3;
      }
    }
    puVar7 = param_2 + param_3;
    if (sVar6 != 0) {
      if ((param_4 == 0) ||
         (plVar5 = (long *)System_Text_Encoder__get_FallbackBuffer(param_4), plVar5 == (long *)0x0))
      {
LAB_0743bf6c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar5[2] = (long)param_2;
      plVar5[3] = (long)puVar7;
      plVar5[4] = param_4;
      thunk_FUN_03f5d7b8(plVar5 + 4,param_4);
      *(undefined2 *)(plVar5 + 5) = 0;
      *(undefined1 *)((long)plVar5 + 0x2a) = 0;
      pcVar1 = *(code **)(*plVar5 + 0x1d8);
      uVar2 = *(undefined8 *)(*plVar5 + 0x1e0);
      *(undefined4 *)((long)plVar5 + 0x2c) = 0;
      local_58 = param_2;
      (*pcVar1)(plVar5,sVar6,&local_58,uVar2);
      puVar8 = local_58;
      goto LAB_0743be94;
    }
  }
  plVar5 = (long *)0x0;
  puVar8 = param_2;
LAB_0743be94:
  iVar4 = 0;
LAB_0743be98:
  do {
    if (plVar5 == (long *)0x0) {
      uVar3 = 0;
LAB_0743bed4:
      if (puVar7 <= puVar8) {
        return iVar4;
      }
    }
    else {
      uVar3 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
      *(bool *)((long)plVar5 + 0x2a) = uVar3 != 0;
      if (uVar3 == 0) {
        *(undefined4 *)((long)plVar5 + 0x2c) = 0;
        goto LAB_0743bed4;
      }
    }
    puVar9 = puVar8;
    if (uVar3 == 0) {
      puVar9 = puVar8 + 1;
      uVar3 = *puVar8;
    }
    if (uVar3 < 0x100) {
      iVar4 = iVar4 + 1;
      puVar8 = puVar9;
      goto LAB_0743be98;
    }
    if (plVar5 == (long *)0x0) {
      if (param_4 == 0) {
        plVar5 = *(long **)(param_1 + 0x28);
        if (plVar5 == (long *)0x0) goto LAB_0743bf6c;
        plVar5 = (long *)(**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
      }
      else {
        plVar5 = (long *)System_Text_Encoder__get_FallbackBuffer(param_4);
      }
      if (plVar5 == (long *)0x0) goto LAB_0743bf6c;
      plVar5[4] = param_4;
      plVar5[2] = (long)param_2;
      plVar5[3] = (long)puVar7;
      thunk_FUN_03f5d7b8(plVar5 + 4,param_4);
      *(undefined2 *)(plVar5 + 5) = 0;
      *(undefined1 *)((long)plVar5 + 0x2a) = 0;
      *(undefined4 *)((long)plVar5 + 0x2c) = 0;
    }
    local_58 = puVar9;
    (**(code **)(*plVar5 + 0x1d8))(plVar5,uVar3,&local_58,*(undefined8 *)(*plVar5 + 0x1e0));
    puVar8 = local_58;
  } while( true );
}

