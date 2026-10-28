// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<DoReadAsDecimalAsync>d__49$$MoveNext
// address: 0x765913c
// body: available
// range: 0x765913c-0x765938f inclusive
// range: 0x765948c-0x765948f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7659360 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7659374 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765938c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765948c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<DoReadAsDecimalAsync>d__49__MoveNext(int *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_095223cf & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197e10);
    FUN_03f5c2a4(&DAT_09197e30);
    FUN_03f5c2a4(&DAT_09175118);
    FUN_03f5c2a4(&DAT_0919b950);
    FUN_03f5c2a4(&DAT_0919ba68);
    FUN_03f5c2a4(&DAT_0919ba70);
    FUN_03f5c2a4(&DAT_0917dc48);
    FUN_03f5c2a4(&DAT_091bcca8);
    DAT_095223cf = 1;
  }
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  auVar2 = ZEXT816(0);
  local_88 = 0;
  if (*param_1 == 0) {
    local_80 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
LAB_076592a0:
    plVar5 = (long *)FUN_06dab358(local_80,DAT_0919ba68);
    if ((plVar5 != (long *)0x0) && (*plVar5 != *(long *)(DAT_0917dc48 + 0x40))) {
      auVar2 = local_80;
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar5,*(long *)(DAT_0917dc48 + 0x40));
      }
      goto LAB_0765948c;
    }
    thunk_FUN_03f9959c(plVar5,DAT_0917dc48,&local_b0);
    lVar3 = DAT_09175118;
    *param_1 = -2;
    uStack_68 = uStack_a8;
    local_70 = local_b0;
    local_60 = local_a0;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_48 = uStack_68;
    local_50 = local_70;
    local_40 = local_60;
    FUN_06511cf4(param_1 + 2,&local_50,DAT_09197e30);
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_0765948c;
    }
    lVar3 = Newtonsoft_Json_JsonTextReader__ReadNumberValueAsync
                      (*(long *)(param_1 + 8),5,*(undefined8 *)(param_1 + 10),0);
    auVar2._8_8_ = local_80._8_8_;
    auVar2._0_8_ = local_80._0_8_;
    if (lVar3 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_0765948c;
    }
    local_80 = FUN_062ee72c(lVar3,0,DAT_091bcca8);
    uVar4 = FUN_06dab310(local_80,DAT_0919ba70);
    if ((uVar4 & 1) != 0) goto LAB_076592a0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0xc) = local_80;
    thunk_FUN_03f5d7b8(param_1 + 0xc,0);
    if (*(int *)(DAT_09175118 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_045cfcf8(param_1 + 2,local_80,param_1,DAT_09197e10);
  }
  auVar2 = local_80;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0765948c:
  local_80 = auVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

