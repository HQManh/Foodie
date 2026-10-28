// rea decompile_all
// name: Newtonsoft.Json.JsonValidatingReader$$ValidateInteger
// address: 0x7676318
// body: available
// range: 0x7676318-0x7676947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7676944 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonValidatingReader__ValidateInteger(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  ulong local_80;
  undefined8 uStack_78;
  double local_68;
  ulong local_60;
  double dStack_58;
  
  if ((DAT_095224a3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_09187488);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b6d58);
    FUN_03f5c2a4(&DAT_091b6d60);
    FUN_03f5c2a4(&DAT_091b6d68);
    FUN_03f5c2a4(&DAT_0917dc60);
    FUN_03f5c2a4(&DAT_09204f60);
    FUN_03f5c2a4(&DAT_09204f68);
    FUN_03f5c2a4(&DAT_09204f48);
    FUN_03f5c2a4(&DAT_09204f58);
    FUN_03f5c2a4(&DAT_09204f50);
    DAT_095224a3 = 1;
  }
  local_60 = 0;
  dStack_58 = 0.0;
  local_68 = 0.0;
  if ((param_2 != 0) &&
     (uVar3 = Newtonsoft_Json_JsonValidatingReader__TestType(param_1,param_2,4), (uVar3 & 1) != 0))
  {
    Newtonsoft_Json_JsonValidatingReader__ValidateNotDisallowed(param_1,param_2);
    plVar4 = *(long **)(param_1 + 0x78);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250));
    local_60 = *(ulong *)(param_2 + 0x48);
    dStack_58 = *(double *)(param_2 + 0x50);
    if ((local_60 & 0xff) != 0) {
      local_80 = local_60;
      uStack_78 = dStack_58;
      uVar5 = FUN_03f5c42c(DAT_0917dc60,&local_80);
      iVar2 = Newtonsoft_Json_Linq_JValue__Compare(6,plVar4,uVar5,0);
      if (0 < iVar2) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uStack_78 = *(undefined8 *)(param_2 + 0x50);
        local_80 = *(ulong *)(param_2 + 0x48);
        uVar6 = FUN_03f5c42c(DAT_0917dc60,&local_80);
        uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_09204f58,uVar5,plVar4,uVar6,0)
        ;
        Newtonsoft_Json_JsonValidatingReader__RaiseError(param_1,uVar5);
      }
      if (*(char *)(param_2 + 0x59) != '\0') {
        uStack_78 = *(undefined8 *)(param_2 + 0x50);
        local_80 = *(ulong *)(param_2 + 0x48);
        uVar5 = FUN_03f5c42c(DAT_0917dc60,&local_80);
        iVar2 = Newtonsoft_Json_Linq_JValue__Compare(6,plVar4,uVar5,0);
        if (iVar2 == 0) {
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uStack_78 = *(undefined8 *)(param_2 + 0x50);
          local_80 = *(ulong *)(param_2 + 0x48);
          uVar6 = FUN_03f5c42c(DAT_0917dc60,&local_80);
          uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith
                            (DAT_09204f48,uVar5,plVar4,uVar6,0);
          Newtonsoft_Json_JsonValidatingReader__RaiseError(param_1,uVar5);
        }
      }
    }
    local_60 = *(ulong *)(param_2 + 0x38);
    dStack_58 = *(double *)(param_2 + 0x40);
    if ((local_60 & 0xff) != 0) {
      local_80 = local_60;
      uStack_78 = dStack_58;
      uVar5 = FUN_03f5c42c(DAT_0917dc60,&local_80);
      iVar2 = Newtonsoft_Json_Linq_JValue__Compare(6,plVar4,uVar5,0);
      if (iVar2 < 0) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uStack_78 = *(undefined8 *)(param_2 + 0x40);
        local_80 = *(ulong *)(param_2 + 0x38);
        uVar6 = FUN_03f5c42c(DAT_0917dc60,&local_80);
        uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_09204f60,uVar5,plVar4,uVar6,0)
        ;
        Newtonsoft_Json_JsonValidatingReader__RaiseError(param_1,uVar5);
      }
      if (*(char *)(param_2 + 0x58) != '\0') {
        uStack_78 = *(undefined8 *)(param_2 + 0x40);
        local_80 = *(ulong *)(param_2 + 0x38);
        uVar5 = FUN_03f5c42c(DAT_0917dc60,&local_80);
        iVar2 = Newtonsoft_Json_Linq_JValue__Compare(6,plVar4,uVar5,0);
        if (iVar2 == 0) {
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uStack_78 = *(undefined8 *)(param_2 + 0x40);
          local_80 = *(ulong *)(param_2 + 0x38);
          uVar6 = FUN_03f5c42c(DAT_0917dc60,&local_80);
          uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith
                            (DAT_09204f50,uVar5,plVar4,uVar6,0);
          Newtonsoft_Json_JsonValidatingReader__RaiseError(param_1,uVar5);
        }
      }
    }
    dStack_58 = *(double *)(param_2 + 0x30);
    local_60 = *(ulong *)(param_2 + 0x28);
    if ((local_60 & 0xff) != 0) {
      if ((plVar4 == (long *)0x0) || (*plVar4 != DAT_09181b78)) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182b88);
        }
        lVar7 = System_Convert__ToInt64(plVar4,uVar5,0);
        local_60 = *(ulong *)(param_2 + 0x28);
        dVar10 = *(double *)(param_2 + 0x30);
        dStack_58 = dVar10;
        if (*(int *)(DAT_09187488 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fmod((double)lVar7,dVar10);
        uVar3 = Newtonsoft_Json_JsonValidatingReader__IsZero();
        if ((uVar3 & 1) != 0) {
          return;
        }
      }
      else {
        pauVar8 = (undefined1 (*) [16])thunk_FUN_03f99594(plVar4);
        dStack_58 = *(double *)(param_2 + 0x30);
        local_60 = *(ulong *)(param_2 + 0x28);
        uVar5 = *(undefined8 *)*pauVar8;
        uVar6 = *(undefined8 *)(*pauVar8 + 8);
        auVar1 = *pauVar8;
        auVar12 = *pauVar8;
        dVar10 = (double)FUN_05c2dd40(&local_60,DAT_091b6d68);
        dStack_58 = *(double *)(param_2 + 0x30);
        local_60 = *(ulong *)(param_2 + 0x28);
        uVar9 = FUN_05c2dd40(&local_60,DAT_091b6d68);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        dVar11 = (double)System_Math__Truncate(uVar9,0);
        local_68 = ABS(dVar10 - dVar11);
        uVar3 = System_Double__Equals(0,&local_68,0);
        if ((uVar3 & 1) == 0) {
          if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
            FUN_03f5c424();
            auVar12 = auVar1;
          }
        }
        else {
          dStack_58 = *(double *)(param_2 + 0x30);
          local_60 = *(ulong *)(param_2 + 0x28);
          FUN_05c2dd40(&local_60,DAT_091b6d68);
          local_80 = 0;
          uStack_78 = 0;
          System_Numerics_BigInteger___ctor(&local_80,0);
          if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          auVar12 = System_Numerics_BigInteger__op_Modulus(uVar5,uVar6,local_80,uStack_78,0);
        }
        uVar3 = System_Numerics_BigInteger__op_Inequality(auVar12._0_8_,auVar12._8_8_,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
      }
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09187300);
      }
      uVar6 = Newtonsoft_Json_JsonConvert__ToString(plVar4,0);
      uStack_78 = *(undefined8 *)(param_2 + 0x30);
      local_80 = *(ulong *)(param_2 + 0x28);
      uVar9 = FUN_03f5c42c(DAT_0917dc60,&local_80);
      uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_09204f68,uVar5,uVar6,uVar9,0);
      Newtonsoft_Json_JsonValidatingReader__RaiseError(param_1,uVar5);
    }
  }
  return;
}

