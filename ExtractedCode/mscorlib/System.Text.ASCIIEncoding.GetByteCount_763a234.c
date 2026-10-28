// rea decompile_all
// name: System.Text.ASCIIEncoding$$GetByteCount
// address: 0x763a234
// body: available
// range: 0x763a234-0x763a53b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x763a4a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x763a538 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Text_ASCIIEncoding__GetByteCount(long *param_1,ushort *param_2,int param_3,long param_4)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  short sVar11;
  ushort *puVar12;
  ushort *local_48;
  
  if ((DAT_09522257 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183fa8);
    DAT_09522257 = 1;
  }
  puVar1 = param_2 + param_3;
  local_48 = (ushort *)0x0;
  puVar12 = param_2;
  if (param_4 == 0) {
    plVar7 = (long *)param_1[5];
    if ((plVar7 == (long *)0x0) || (plVar10 = (long *)0x0, *plVar7 != DAT_09183fa8)) {
      plVar10 = (long *)0x0;
      goto LAB_0763a3ec;
    }
    sVar11 = 0;
    lVar8 = DAT_09183fa8;
LAB_0763a344:
    iVar3 = (**(code **)(lVar8 + 0x188))(plVar7,*(undefined8 *)(lVar8 + 400));
    if (iVar3 == 1) {
      if (sVar11 != 0) {
        param_3 = param_3 + 1;
      }
      return param_3;
    }
    if (sVar11 == 0) goto LAB_0763a3ec;
    if (param_4 == 0) goto LAB_0763a4a8;
  }
  else {
    plVar7 = *(long **)(param_4 + 0x10);
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else if (*plVar7 != DAT_09183fa8) {
      plVar7 = (long *)0x0;
    }
    sVar11 = *(short *)(param_4 + 0x20);
    uVar4 = System_Text_Encoder__get_InternalHasFallbackBuffer(param_4,0);
    plVar10 = (long *)0x0;
    if ((uVar4 & 1) != 0) {
      plVar10 = (long *)System_Text_Encoder__get_FallbackBuffer(param_4,0);
      if (plVar10 == (long *)0x0) goto LAB_0763a4a8;
      iVar3 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      if ((0 < iVar3) && (*(char *)(param_4 + 0x31) != '\0')) {
        uVar5 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
        FUN_039b1d98(param_4);
        uVar9 = *(undefined8 *)(param_4 + 0x10);
        FUN_039b1d98(uVar9);
        uVar9 = System_Object__GetType(uVar9,0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_09208350);
        uVar5 = SR__Format(uVar6,uVar5,uVar9,0);
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar9 = thunk_FUN_03f9944c();
        System_ArgumentException___ctor(uVar9,uVar5,0);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091bf480);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar9,uVar5);
      }
      System_Text_EncoderFallbackBuffer__InternalInitialize(plVar10,param_2,puVar1,param_4,0,0);
    }
    if (plVar7 != (long *)0x0) {
      lVar8 = *plVar7;
      goto LAB_0763a344;
    }
    if (sVar11 == 0) goto LAB_0763a3ec;
  }
  plVar10 = (long *)System_Text_Encoder__get_FallbackBuffer(param_4,0);
  if (plVar10 == (long *)0x0) {
LAB_0763a4a8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  System_Text_EncoderFallbackBuffer__InternalInitialize(plVar10,param_2,puVar1,param_4,0,0);
  local_48 = param_2;
  (**(code **)(*plVar10 + 0x1d8))(plVar10,sVar11,&local_48,*(undefined8 *)(*plVar10 + 0x1e0));
  puVar12 = local_48;
LAB_0763a3ec:
  iVar3 = 0;
LAB_0763a3f0:
  do {
    if (plVar10 == (long *)0x0) {
      uVar2 = 0;
LAB_0763a414:
      if (puVar1 <= puVar12) {
        return iVar3;
      }
    }
    else {
      uVar2 = System_Text_EncoderFallbackBuffer__InternalGetNextChar(plVar10,0);
      if (uVar2 == 0) goto LAB_0763a414;
    }
    if (uVar2 == 0) {
      uVar2 = *puVar12;
      puVar12 = puVar12 + 1;
    }
    if (uVar2 < 0x80) {
      iVar3 = iVar3 + 1;
      goto LAB_0763a3f0;
    }
    if (plVar10 == (long *)0x0) {
      if (param_4 == 0) {
        plVar7 = (long *)param_1[5];
        if (plVar7 == (long *)0x0) goto LAB_0763a4a8;
        plVar10 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
      }
      else {
        plVar10 = (long *)System_Text_Encoder__get_FallbackBuffer(param_4,0);
      }
      if (plVar10 == (long *)0x0) goto LAB_0763a4a8;
      System_Text_EncoderFallbackBuffer__InternalInitialize(plVar10,param_2,puVar1,param_4,0,0);
    }
    local_48 = puVar12;
    (**(code **)(*plVar10 + 0x1d8))(plVar10,uVar2,&local_48,*(undefined8 *)(*plVar10 + 0x1e0));
    puVar12 = local_48;
  } while( true );
}

