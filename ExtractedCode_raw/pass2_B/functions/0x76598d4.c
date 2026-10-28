// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<DoReadAsInt32Async>d__53$$MoveNext
// address: 0x76598d4
// body: available
// range: 0x76598d4-0x7659b0b inclusive
// range: 0x7659c08-0x7659c0b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7659adc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7659af0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7659b08 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7659c08 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<DoReadAsInt32Async>d__53__MoveNext(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 local_70 [3];
  undefined4 local_58;
  undefined1 local_50 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((DAT_095223d3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197e88);
    FUN_03f5c2a4(&DAT_09197eb0);
    FUN_03f5c2a4(&DAT_09175128);
    FUN_03f5c2a4(&DAT_0919b950);
    FUN_03f5c2a4(&DAT_0919ba68);
    FUN_03f5c2a4(&DAT_0919ba70);
    FUN_03f5c2a4(&DAT_0917dc80);
    FUN_03f5c2a4(&DAT_091bcca8);
    DAT_095223d3 = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  auVar3 = ZEXT816(0);
  local_58 = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
LAB_07659a38:
    plVar6 = (long *)FUN_06dab358(local_50,DAT_0919ba68);
    if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)(DAT_0917dc80 + 0x40))) {
      auVar3 = local_50;
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar6,*(long *)(DAT_0917dc80 + 0x40));
      }
      goto LAB_07659c08;
    }
    thunk_FUN_03f9959c(plVar6,DAT_0917dc80,local_70);
    iVar1 = *(int *)(DAT_09175128 + 0xe4);
    *param_1 = -2;
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    FUN_06512b64(param_1 + 2,local_70[0],DAT_09197eb0);
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_07659c08;
    }
    lVar4 = Newtonsoft_Json_JsonTextReader__ReadNumberValueAsync
                      (*(long *)(param_1 + 8),1,*(undefined8 *)(param_1 + 10),0);
    auVar3._8_8_ = local_50._8_8_;
    auVar3._0_8_ = local_50._0_8_;
    if (lVar4 == 0) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_07659c08;
    }
    local_50 = FUN_062ee72c(lVar4,0,DAT_091bcca8);
    uVar5 = FUN_06dab310(local_50,DAT_0919ba70);
    if ((uVar5 & 1) != 0) goto LAB_07659a38;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0xc) = local_50;
    thunk_FUN_03f5d7b8(param_1 + 0xc,0);
    if (*(int *)(DAT_09175128 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_045d05b8(param_1 + 2,local_50,param_1,DAT_09197e88);
  }
  auVar3 = local_50;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_07659c08:
  local_50 = auVar3;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

