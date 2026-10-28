// rea decompile_all
// name: System.RuntimeType$$GetNestedTypeCandidates
// address: 0x75f2434
// body: available
// range: 0x75f2434-0x75f25e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f25e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f25e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_RuntimeType__GetNestedTypeCandidates
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [4];
  char local_64 [4];
  
  if ((DAT_09521f3e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aa2b8);
    FUN_03f5c2a4(&DAT_091aa2b0);
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09521f3e = 1;
  }
  local_64[0] = '\0';
  local_68[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_7c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_RuntimeType__SplitName(param_3,&local_70,&local_78);
  System_RuntimeType__FilterHelper
            (param_4 & 0xfffffff7,&local_70,param_5 & 1,local_64,local_68,&local_7c);
  lVar4 = System_RuntimeType__GetNestedTypes_internal
                    (param_2,local_70,param_4 & 0xfffffff7,local_7c);
  if (lVar4 != 0) {
    FUN_05639958(&local_98,*(undefined4 *)(lVar4 + 0x18),DAT_091aa2b0);
    cVar3 = local_64[0];
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar7 = 0;
      uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        uVar2 = local_70;
        uVar1 = local_78;
        if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar6 = *(undefined8 *)(lVar4 + 0x20 + uVar7 * 8);
        if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_RuntimeType__FilterApplyType
                          (uVar6,param_4 & 0xfffffff7,uVar2,cVar3 != '\0',uVar1);
        if ((uVar5 & 1) != 0) {
          FUN_05639b84(&local_98,uVar6,DAT_091aa2b8);
        }
        uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    param_1[1] = uStack_90;
    *param_1 = local_98;
    param_1[2] = local_88;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

