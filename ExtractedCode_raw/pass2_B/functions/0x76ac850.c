// rea decompile_all
// name: Newtonsoft.Json.Serialization.DiagnosticsTraceWriter$$Trace
// address: 0x76ac850
// body: available
// range: 0x76ac850-0x76acb1b inclusive
// range: 0x76acb50-0x76acb6f inclusive
// range: 0x76acbcc-0x76acc77 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76acb54 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76acb58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76acb5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76acb60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76acb68 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76acb6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76acc74 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076acac8) */
/* WARNING: Removing unreachable block (ram,0x076acb64) */
/* WARNING: Removing unreachable block (ram,0x076acc74) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Newtonsoft_Json_Serialization_DiagnosticsTraceWriter__Trace
               (undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  char local_74 [4];
  long *local_70;
  long *local_68;
  
  if ((DAT_09522658 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0918bf60);
    FUN_03f5c2a4(&DAT_0918bf98);
    FUN_03f5c2a4(&DAT_09208840);
    DAT_09522658 = 1;
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_74[0] = '\0';
  if (param_2 == 0) {
    return;
  }
  uVar2 = thunk_FUN_03f9944c(DAT_0918bf60);
  uVar3 = System_Diagnostics_TraceEventCache___ctor(uVar2,0);
  uVar1 = Newtonsoft_Json_Serialization_DiagnosticsTraceWriter__GetTraceEventType(uVar3,param_2);
  lVar4 = System_Diagnostics_Trace__get_Listeners(0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar5 = (long *)System_Diagnostics_TraceListenerCollection__GetEnumerator(lVar4,0);
  do {
    local_68 = plVar5;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185b10) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076ac998;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_076ac998:
    uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    plVar5 = local_68;
    if ((uVar8 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_03f99350(local_68,DAT_09185a58);
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 == 0) goto LAB_076acc24;
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *local_68;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185b10) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_076aca00;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185b10,1);
LAB_076aca00:
    plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar7;
    if ((*(byte *)(lVar4 + 0x130) < *(byte *)(DAT_0918bf98 + 0x130)) ||
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_0918bf98 + 0x130) * 8 + -8) !=
        DAT_0918bf98)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar7);
    }
    uVar8 = (**(code **)(lVar4 + 0x1a8))(plVar7,*(undefined8 *)(lVar4 + 0x1b0));
    if ((uVar8 & 1) == 0) {
      local_74[0] = '\0';
      local_70 = plVar7;
      System_Threading_Monitor__Enter(plVar7,local_74,0);
      (**(code **)(*plVar7 + 0x208))
                (plVar7,uVar2,DAT_09208840,uVar1,0,param_3,*(undefined8 *)(*plVar7 + 0x210));
      if (local_74[0] != '\0') {
        System_Threading_Monitor__Exit(local_70,0);
      }
    }
    else {
      (**(code **)(*plVar7 + 0x208))
                (plVar7,uVar2,DAT_09208840,uVar1,0,param_3,*(undefined8 *)(*plVar7 + 0x210));
    }
    uVar8 = System_Diagnostics_Trace__get_AutoFlush(0);
    plVar5 = local_68;
    if ((uVar8 & 1) != 0) {
      (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      plVar5 = local_68;
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_076acc40;
    }
  }
LAB_076acc24:
  puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_076acc40:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}

