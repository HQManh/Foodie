// rea decompile_all
// name: Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions$$CleanupAsyncStackTrace
// address: 0x7dc9b44
// body: available
// range: 0x7dc9b44-0x7dca183 inclusive
// range: 0x7dca224-0x7dca26f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7dca268 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7dca26c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Cysharp_Threading_Tasks_Internal_DiagnosticsExtensions__CleanupAsyncStackTrace(long *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint local_74;
  undefined8 local_70;
  long *local_68;
  
  if ((DAT_0952619a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183b18);
    FUN_03f5c2a4(&DAT_091ca648);
    FUN_03f5c2a4(&DAT_09178e10);
    FUN_03f5c2a4(&DAT_09188228);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091e8e20);
    FUN_03f5c2a4(&DAT_09190128);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_091fa158);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_09217af0);
    FUN_03f5c2a4(&DAT_091f7f68);
    FUN_03f5c2a4(&DAT_091f82a8);
    FUN_03f5c2a4(&DAT_091f83f0);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_091fad68);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_0952619a = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  local_74 = 0;
  uVar8 = DAT_091f5700;
  if (param_1 != (long *)0x0) {
    plVar4 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
    System_Text_StringBuilder___ctor(plVar4,0);
    iVar2 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        plVar5 = (long *)(**(code **)(*param_1 + 0x188))
                                   (param_1,iVar2,*(undefined8 *)(*param_1 + 400));
        if (plVar5 == (long *)0x0) goto LAB_07dca26c;
        plVar6 = (long *)(**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
        local_68 = plVar6;
        if (*(int *)(DAT_09183b18 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183b18);
        }
        uVar7 = Cysharp_Threading_Tasks_Internal_DiagnosticsExtensions__IgnoreLine(plVar6);
        plVar6 = local_68;
        if ((uVar7 & 1) == 0) {
          if (*(int *)(DAT_09183b18 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = Cysharp_Threading_Tasks_Internal_DiagnosticsExtensions__IsAsync(plVar6);
          if ((uVar7 & 1) != 0) {
            if (plVar4 == (long *)0x0) goto LAB_07dca26c;
            System_Text_StringBuilder__Append(plVar4,DAT_09217af0,0);
            if (*(int *)(DAT_09183b18 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            Cysharp_Threading_Tasks_Internal_DiagnosticsExtensions__TryResolveStateMachineMethod
                      (&local_68,&local_70);
          }
          if (local_68 == (long *)0x0) goto LAB_07dca26c;
          lVar10 = *local_68;
          if ((*(byte *)(DAT_09188228 + 0x130) <= *(byte *)(lVar10 + 0x130)) &&
             (*(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8)
              == DAT_09188228)) {
            uVar8 = (**(code **)(lVar10 + 0x3f8))(local_68,*(undefined8 *)(lVar10 + 0x400));
            if (*(int *)(DAT_09183b18 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09183b18);
            }
            uVar8 = Cysharp_Threading_Tasks_Internal_DiagnosticsExtensions__BeautifyType(uVar8,0);
            if (plVar4 == (long *)0x0) goto LAB_07dca26c;
            System_Text_StringBuilder__Append(plVar4,uVar8,0);
            System_Text_StringBuilder__Append(plVar4,DAT_091f5a98,0);
            if (local_68 == (long *)0x0) goto LAB_07dca26c;
          }
          uVar8 = (**(code **)(*local_68 + 0x1c8))(local_68,*(undefined8 *)(*local_68 + 0x1d0));
          if (*(int *)(DAT_09183b18 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09183b18);
          }
          uVar8 = Cysharp_Threading_Tasks_Internal_DiagnosticsExtensions__BeautifyType(uVar8,0);
          if ((plVar4 == (long *)0x0) ||
             (System_Text_StringBuilder__Append(plVar4,uVar8,0), local_68 == (long *)0x0))
          goto LAB_07dca26c;
          uVar7 = System_Reflection_MethodBase__get_IsConstructor(local_68,0);
          if ((uVar7 & 1) == 0) {
            System_Text_StringBuilder__Append(plVar4,DAT_091f8f68,0);
          }
          if (local_68 == (long *)0x0) goto LAB_07dca26c;
          uVar8 = (**(code **)(*local_68 + 0x1b8))(local_68,*(undefined8 *)(*local_68 + 0x1c0));
          System_Text_StringBuilder__Append(plVar4,uVar8,0);
          if (local_68 == (long *)0x0) goto LAB_07dca26c;
          uVar7 = (**(code **)(*local_68 + 0x318))(local_68,*(undefined8 *)(*local_68 + 800));
          if ((uVar7 & 1) != 0) {
            System_Text_StringBuilder__Append(plVar4,DAT_091fa158,0);
            if (local_68 == (long *)0x0) goto LAB_07dca26c;
            lVar10 = (**(code **)(*local_68 + 0x338))(local_68,*(undefined8 *)(*local_68 + 0x340));
            local_74 = 0;
            if (lVar10 == 0) goto LAB_07dca26c;
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (0 < (int)uVar1) {
              do {
                if (uVar1 <= local_74) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                uVar8 = *(undefined8 *)(lVar10 + (long)(int)local_74 * 8 + 0x20);
                if (*(int *)(DAT_09183b18 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar8 = Cysharp_Threading_Tasks_Internal_DiagnosticsExtensions__BeautifyType
                                  (uVar8,1);
                System_Text_StringBuilder__Append(plVar4,uVar8,0);
                uVar1 = *(uint *)(lVar10 + 0x18);
                local_74 = local_74 + 1;
              } while ((int)local_74 < (int)uVar1);
            }
            System_Text_StringBuilder__Append(plVar4,DAT_091fad68,0);
          }
          System_Text_StringBuilder__Append(plVar4,DAT_091f7f68,0);
          if (local_68 == (long *)0x0) goto LAB_07dca26c;
          uVar8 = (**(code **)(*local_68 + 600))(local_68,*(undefined8 *)(*local_68 + 0x260));
          if (*(int *)(DAT_09190128 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09190128);
          }
          uVar9 = DAT_091f86e8;
          puVar11 = *(undefined8 **)(DAT_09190128 + 0xb8);
          lVar10 = puVar11[1];
          if (lVar10 == 0) {
            if (*(int *)(DAT_09190128 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09190128);
              puVar11 = *(undefined8 **)(DAT_09190128 + 0xb8);
            }
            uVar12 = *puVar11;
            lVar10 = thunk_FUN_03f9944c(DAT_09178e10);
            FUN_05324070(lVar10,uVar12,DAT_091e8e20,0);
            plVar6 = (long *)(*(long *)(DAT_09190128 + 0xb8) + 8);
            *plVar6 = lVar10;
            thunk_FUN_03f5d7b8(plVar6,lVar10);
          }
          uVar8 = FUN_04af8044(uVar8,lVar10,DAT_091ca648);
          uVar8 = System_String__Join(uVar9,uVar8,0);
          System_Text_StringBuilder__Append(plVar4,uVar8,0);
          System_Text_StringBuilder__Append(plVar4,DAT_091f83f0,0);
          if (*(int *)(DAT_09183b18 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (((**(char **)(DAT_09183b18 + 0xb8) != '\0') &&
              (iVar3 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0)),
              iVar3 != -1)) &&
             (lVar10 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400)),
             lVar10 != 0)) {
            System_Text_StringBuilder__Append(plVar4,0x20,0);
            if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            local_74 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
            uVar9 = System_Int32__ToString(&local_74,0);
            if (*(int *)(DAT_09183b18 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09183b18);
            }
            uVar9 = Cysharp_Threading_Tasks_Internal_DiagnosticsExtensions__AppendHyperLink
                              (lVar10,uVar9);
            System_Text_StringBuilder__AppendFormat(plVar4,uVar8,DAT_091f82a8,uVar9,0);
          }
          System_Text_StringBuilder__AppendLine(plVar4,0);
        }
        iVar2 = iVar2 + 1;
        iVar3 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
      } while (iVar2 < iVar3);
    }
    if (plVar4 == (long *)0x0) {
LAB_07dca26c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar8 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  }
  return uVar8;
}

