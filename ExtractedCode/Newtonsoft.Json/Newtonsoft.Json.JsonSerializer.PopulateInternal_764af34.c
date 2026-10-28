// rea decompile_all
// name: Newtonsoft.Json.JsonSerializer$$PopulateInternal
// address: 0x764af34
// body: available
// range: 0x764af34-0x764b1ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x764b1a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonSerializer__PopulateInternal(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  if ((DAT_09522341 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186850);
    FUN_03f5c2a4(&DAT_09187438);
    FUN_03f5c2a4(&DAT_09223c10);
    FUN_03f5c2a4(&DAT_092215e0);
    DAT_09522341 = 1;
  }
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_68 = 0;
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_2,DAT_092215e0,0);
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_3,DAT_09223c10,0);
  Newtonsoft_Json_JsonSerializer__SetupReader
            (param_1,param_2,&local_38,&uStack_48,&local_50,&local_58,&local_60,&local_68);
  lVar2 = (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
  if (lVar2 == 0) {
LAB_0764b0a0:
    lVar2 = 0;
  }
  else {
    plVar3 = (long *)(**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    if (plVar3 == (long *)0x0) goto LAB_0764b1a8;
    lVar2 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09186850) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0764b07c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09186850,0);
LAB_0764b07c:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((int)uVar5 < 4) goto LAB_0764b0a0;
    lVar2 = Newtonsoft_Json_JsonSerializer__CreateTraceJsonReader(uVar5,param_2);
  }
  lVar6 = thunk_FUN_03f9944c(DAT_09187438);
  Newtonsoft_Json_Serialization_JsonSerializerInternalReader___ctor(lVar6,param_1,0);
  if (lVar6 != 0) {
    lVar1 = param_2;
    if (lVar2 != 0) {
      lVar1 = lVar2;
    }
    Newtonsoft_Json_Serialization_JsonSerializerInternalReader__Populate(lVar6,lVar1,param_3,0);
    if (lVar2 != 0) {
      plVar3 = (long *)(**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
      uVar5 = Newtonsoft_Json_Serialization_TraceJsonReader__GetDeserializedJsonMessage(lVar2,0);
      if (plVar3 == (long *)0x0) goto LAB_0764b1a8;
      lVar2 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09186850) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_0764b15c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09186850,1);
LAB_0764b15c:
      (*(code *)*puVar4)(plVar3,4,uVar5,0,puVar4[1]);
    }
    Newtonsoft_Json_JsonSerializer__ResetReader
              (param_1,param_2,local_38,uStack_48,local_50,local_58,local_60,local_68);
    return;
  }
LAB_0764b1a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

