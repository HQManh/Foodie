// rea decompile_all
// name: Newtonsoft.Json.JsonReader$$Push
// address: 0x7643d88
// body: available
// range: 0x7643d88-0x7644043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7643fb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7644040 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonReader__Push(long *param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long local_70;
  long lStack_68;
  long local_60;
  long local_50;
  long lStack_48;
  long local_40;
  
  if ((DAT_095222ff & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ae028);
    FUN_03f5c2a4(&DAT_091ae020);
    FUN_03f5c2a4(&DAT_0917c5c8);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6fb8);
    DAT_095222ff = 1;
  }
  if ((char)param_1[7] != '\0') {
    *(int *)((long)param_1 + 0x2c) = *(int *)((long)param_1 + 0x2c) + 1;
  }
  plVar10 = param_1 + 5;
  if ((int)*plVar10 == 0) {
    local_50 = 0;
    lStack_48 = 0;
    local_40 = 0;
    Newtonsoft_Json_JsonPosition___ctor(&local_50,param_2);
    param_1[6] = lStack_48;
    *plVar10 = local_50;
    param_1[7] = local_40;
    thunk_FUN_03f5d7b8(param_1 + 6,0);
  }
  else {
    plVar9 = param_1 + 0xd;
    lVar4 = *plVar9;
    if (lVar4 == 0) {
      lVar4 = thunk_FUN_03f9944c(DAT_0917c5c8);
      FUN_057ae7a4(lVar4,DAT_091ae020);
      *plVar9 = lVar4;
      thunk_FUN_03f5d7b8(plVar9,lVar4);
      lStack_68 = param_1[6];
      local_70 = *plVar10;
      lVar4 = *plVar9;
      local_60 = param_1[7];
      if (lVar4 == 0) goto LAB_07643fb8;
    }
    else {
      lStack_68 = param_1[6];
      local_70 = *plVar10;
      local_60 = param_1[7];
    }
    lVar2 = DAT_091ae028;
    lVar8 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar8 == 0) {
LAB_07643fb8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      lVar8 = lVar8 + (long)(int)uVar1 * 0x18;
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      *(long *)(lVar8 + 0x28) = lStack_68;
      *(long *)(lVar8 + 0x20) = local_70;
      *(long *)(lVar8 + 0x30) = local_60;
      thunk_FUN_03f5d7b8(lVar8 + 0x28,0);
    }
    else {
      lStack_48 = lStack_68;
      local_50 = local_70;
      local_40 = local_60;
      FUN_057af0c8(lVar4,&local_50,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                  );
    }
    local_50 = 0;
    lStack_48 = 0;
    local_40 = 0;
    Newtonsoft_Json_JsonPosition___ctor(&local_50,param_2);
    param_1[6] = lStack_48;
    *plVar10 = local_50;
    param_1[7] = local_40;
    thunk_FUN_03f5d7b8(param_1 + 6,0);
    if (*(char *)((long)param_1 + 0x4c) != '\0') {
      iVar3 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
      if ((((*(ulong *)((long)param_1 + 0x4c) & 0xff) != 0) &&
          ((int)(*(ulong *)((long)param_1 + 0x4c) >> 0x20) < iVar3 + 1)) &&
         (*(char *)((long)param_1 + 0x54) == '\0')) {
        *(undefined1 *)((long)param_1 + 0x54) = 1;
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        local_50 = *(long *)((long)param_1 + 0x4c);
        uVar6 = thunk_FUN_03fc39d4(&DAT_0917dc80);
        uVar6 = FUN_03f5c42c(uVar6,&local_50);
        uVar7 = thunk_FUN_03fc39d4(&DAT_0920fbd8);
        uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar7,uVar5,uVar6,0);
        uVar5 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar5);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091d18f0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,uVar6);
      }
    }
  }
  return;
}

