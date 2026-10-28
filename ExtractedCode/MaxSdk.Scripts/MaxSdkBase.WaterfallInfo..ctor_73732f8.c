// rea decompile_all
// name: MaxSdkBase.WaterfallInfo$$.ctor
// address: 0x73732f8
// body: available
// range: 0x73732f8-0x7373683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x737367c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7373680 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MaxSdkBase_WaterfallInfo___ctor(long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 local_98;
  undefined8 *puStack_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  
  if ((DAT_09520941 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09176b80);
    FUN_03f5c2a4(&DAT_091a3aa0);
    FUN_03f5c2a4(&DAT_091a3aa8);
    FUN_03f5c2a4(&DAT_091a3ab0);
    FUN_03f5c2a4(&DAT_091b3410);
    FUN_03f5c2a4(&DAT_091aeaf0);
    FUN_03f5c2a4(&DAT_091aeab0);
    FUN_03f5c2a4(&DAT_091b3408);
    FUN_03f5c2a4(&DAT_0917d5c0);
    FUN_03f5c2a4(&DAT_0917c7e0);
    FUN_03f5c2a4(&DAT_09187f38);
    FUN_03f5c2a4(&DAT_09192740);
    FUN_03f5c2a4(&DAT_0921fc00);
    FUN_03f5c2a4(&DAT_0921e238);
    FUN_03f5c2a4(&DAT_09223cf8);
    FUN_03f5c2a4(&DAT_0921fa28);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09520941 = 1;
  }
  uStack_78 = 0;
  local_80 = 0;
  local_70 = (long *)0x0;
  System_Object___ctor(param_1,0);
  if (*(int *)(DAT_09187f38 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = MaxSdkUtils__GetStringFromDictionary(param_2,DAT_0921fa28,DAT_091f5700);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  thunk_FUN_03f5d7b8();
  uVar3 = MaxSdkUtils__GetStringFromDictionary(param_2,DAT_09223cf8,DAT_091f5700);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  thunk_FUN_03f5d7b8();
  uVar3 = thunk_FUN_03f9944c(DAT_0917c7e0);
  FUN_057e0400(uVar3,DAT_091aeab0);
  lVar4 = MaxSdkUtils__GetListFromDictionary(param_2,DAT_0921fc00,uVar3);
  lVar5 = thunk_FUN_03f9944c(DAT_0917d5c0);
  FUN_057e0400(lVar5,DAT_091b3408);
  plVar9 = (long *)(param_1 + 0x20);
  *plVar9 = lVar5;
  thunk_FUN_03f5d7b8(plVar9,lVar5);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_98,lVar4,DAT_091aeaf0);
  local_70 = local_88;
  uStack_78 = puStack_90;
  local_80 = local_98;
  local_98 = 0;
  puStack_90 = &local_80;
  while( true ) {
    do {
      do {
        uVar6 = FUN_071bd28c(&local_80,DAT_091a3aa8);
        plVar2 = local_70;
        if ((uVar6 & 1) == 0) {
          FUN_071bd288(&local_80,DAT_091a3aa0);
          if (*(int *)(DAT_09187f38 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = MaxSdkUtils__GetLongFromDictionary(param_2,DAT_0921e238,0);
          *(undefined8 *)(param_1 + 0x28) = uVar3;
          return;
        }
      } while (local_70 == (long *)0x0);
    } while ((*(byte *)(*local_70 + 0x130) < *(byte *)(DAT_09176b80 + 0x130)) ||
            (*(long *)(*(long *)(*local_70 + 200) + (ulong)*(byte *)(DAT_09176b80 + 0x130) * 8 + -8)
             != DAT_09176b80));
    uVar3 = thunk_FUN_03f9944c(DAT_09192740);
    MaxSdkBase_NetworkResponseInfo___ctor(uVar3,plVar2);
    lVar4 = DAT_091b3410;
    lVar5 = *plVar9;
    if (lVar5 == 0) break;
    lVar7 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      *puVar8 = uVar3;
      thunk_FUN_03f5d7b8(puVar8,uVar3);
    }
    else {
      FUN_057e0c68(lVar5,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

