// rea decompile_all
// name: Newtonsoft.Json.Linq.JRaw.<CreateAsync>d__0$$MoveNext
// address: 0x76e6a60
// body: available
// range: 0x76e6a60-0x76e6ebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76e6ea8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e6eb0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e6eb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e6eb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e6ebc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076e6eac) */
/* WARNING: Removing unreachable block (ram,0x076e6ea8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Newtonsoft_Json_Linq_JRaw_<CreateAsync>d__0__MoveNext(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 extraout_x1;
  int *piVar6;
  long *plVar7;
  int iVar8;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [16];
  int local_34;
  
  if ((DAT_09522830 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09198d08);
    FUN_03f5c2a4(&DAT_09198d28);
    FUN_03f5c2a4(&DAT_09175270);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09187248);
    FUN_03f5c2a4(&DAT_09187470);
    FUN_03f5c2a4(&DAT_0918b438);
    DAT_09522830 = 1;
  }
  local_34 = *param_1;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_58 = 0;
  if (local_34 == 0) {
LAB_076e6c80:
    local_34 = -1;
    local_50 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar2 = thunk_FUN_03f9944c(DAT_0918b438);
    System_IO_StringWriter___ctor(uVar2,uVar1,0);
    *(undefined8 *)(param_1 + 0xc) = uVar2;
    thunk_FUN_03f5d7b8(param_1 + 0xc,uVar2);
    if (local_34 == 0) goto LAB_076e6c80;
    uVar2 = *(undefined8 *)(param_1 + 0xc);
    uVar1 = thunk_FUN_03f9944c(DAT_09187470);
    Newtonsoft_Json_JsonTextWriter___ctor(uVar1,uVar2,0);
    *(undefined8 *)(param_1 + 0xe) = uVar1;
    thunk_FUN_03f5d7b8(param_1 + 0xe,uVar1);
    if (local_34 == 0) goto LAB_076e6c80;
    if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = Newtonsoft_Json_JsonWriter__WriteTokenSyncReadingAsync
                      (*(long *)(param_1 + 0xe),*(undefined8 *)(param_1 + 8),
                       *(undefined8 *)(param_1 + 10),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_50 = System_Threading_Tasks_Task__ConfigureAwait(lVar3,0,0);
    uVar4 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_50,0);
    if ((uVar4 & 1) == 0) {
      local_34 = 0;
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      if (*(int *)(DAT_09175270 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09175270,extraout_x1,param_1);
      }
      FUN_045f21a0(param_1 + 2,local_50,param_1,DAT_09198d08);
      uVar1 = 0;
      iVar8 = 6;
      goto LAB_076e6cf0;
    }
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_50,0);
  plVar7 = *(long **)(param_1 + 0xc);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
  uVar1 = thunk_FUN_03f9944c(DAT_09187248);
  Newtonsoft_Json_Linq_JValue___ctor(uVar1,uVar2,0xd,0);
  iVar8 = 7;
LAB_076e6cf0:
  if ((local_34 < 0) && (plVar7 = *(long **)(param_1 + 0xe), plVar7 != (long *)0x0)) {
    lVar3 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185a58) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076e6d60;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_076e6d60:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  if ((local_34 < 0) && (plVar7 = *(long **)(param_1 + 0xc), plVar7 != (long *)0x0)) {
    lVar3 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185a58) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076e6de0;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_076e6de0:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  lVar3 = DAT_09175270;
  if (iVar8 == 7) {
    *param_1 = -2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_069f7d10(param_1 + 2,uVar1,DAT_09198d28);
  }
  else if (iVar8 == 0) {
    uVar1 = (&uStack_60)[local_58 + -1];
    *param_1 = -2;
    lVar3 = thunk_FUN_03fc39d4(&DAT_09175270);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = thunk_FUN_03fc39d4(&DAT_09198d20);
    FUN_069f7f5c(param_1 + 2,uVar1,uVar2);
  }
  return;
}

