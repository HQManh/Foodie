// rea decompile_all
// name: AppLovinMax.Internal.MaxWebRequestExtension$$ToQueryString
// address: 0x737f550
// body: available
// range: 0x737f550-0x737f767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x737f760 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737f764 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AppLovinMax_Internal_MaxWebRequestExtension__ToQueryString(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  
  if ((DAT_095209f7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fed0);
    FUN_03f5c2a4(&DAT_091a6888);
    FUN_03f5c2a4(&DAT_091a6890);
    FUN_03f5c2a4(&DAT_091a6898);
    FUN_03f5c2a4(&DAT_091a98e8);
    FUN_03f5c2a4(&DAT_091a98f0);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_0918c918);
    FUN_03f5c2a4(&DAT_09226748);
    FUN_03f5c2a4(&DAT_091fadd0);
    FUN_03f5c2a4(&DAT_091f72b8);
    DAT_095209f7 = 1;
  }
  local_60 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  plVar5 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar5,0);
  if (param_1 != 0) {
    FUN_06fd8888(&local_a8,param_1,DAT_0919fed0);
    local_60 = local_88;
    puStack_78 = puStack_a0;
    local_80 = local_a8;
    local_68 = lStack_90;
    local_70 = local_98;
    local_a8 = 0;
    puStack_a0 = &local_80;
    while (uVar6 = FUN_072753d4(&local_80,DAT_091a6890), lVar3 = local_68, lVar2 = local_70,
          (uVar6 & 1) != 0) {
      if ((local_70 != 0) && (local_68 != 0)) {
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar4 = System_Text_StringBuilder__get_Length(plVar5,0);
        puVar1 = &DAT_091fadd0;
        if (iVar4 != 0) {
          puVar1 = &DAT_091f72b8;
        }
        System_Text_StringBuilder__Append(plVar5,*puVar1,0);
        if (*(int *)(DAT_0918c918 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = System_Uri__EscapeDataString(lVar2,0);
        uVar8 = System_Uri__EscapeDataString(lVar3,0);
        System_Text_StringBuilder__AppendFormat(plVar5,DAT_09226748,uVar7,uVar8,0);
      }
    }
    FUN_072754f4(&local_80,DAT_091a6888);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

