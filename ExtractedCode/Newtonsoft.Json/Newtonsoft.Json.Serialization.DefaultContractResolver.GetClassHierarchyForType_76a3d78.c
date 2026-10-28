// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$GetClassHierarchyForType
// address: 0x76a3d78
// body: available
// range: 0x76a3d78-0x76a3f0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a3f0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Serialization_DefaultContractResolver__GetClassHierarchyForType
               (undefined8 param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if ((DAT_0952262e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b11d0);
    FUN_03f5c2a4(&DAT_091b1200);
    FUN_03f5c2a4(&DAT_091b11c0);
    FUN_03f5c2a4(&DAT_0917cee0);
    DAT_0952262e = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917cee0);
  FUN_057e0400(lVar3,DAT_091b11c0);
  while( true ) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Type__op_Inequality(param_2,0,0);
    lVar2 = DAT_095353e8;
    if ((uVar4 & 1) == 0) break;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Type__GetTypeFromHandle(lVar2 + 0x20,0);
    uVar4 = System_Type__op_Inequality(param_2,uVar5,0);
    lVar2 = DAT_091b11d0;
    if ((uVar4 & 1) == 0) break;
    if (lVar3 == 0) goto LAB_076a3f0c;
    lVar7 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_076a3f0c;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = param_2;
      thunk_FUN_03f5d7b8(puVar6,param_2);
    }
    else {
      FUN_057e0c68(lVar3,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    if (param_2 == (long *)0x0) goto LAB_076a3f0c;
    param_2 = (long *)(**(code **)(*param_2 + 0x8a8))(param_2,*(undefined8 *)(*param_2 + 0x8b0));
  }
  if (lVar3 != 0) {
    FUN_057e2674(lVar3,DAT_091b1200);
    return lVar3;
  }
LAB_076a3f0c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

