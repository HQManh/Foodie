// rea decompile_all
// name: UniRx.CompositeDisposable$$CopyTo
// address: 0x4093fb8
// body: available
// range: 0x4093fb8-0x40942a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4094210 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409428c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4094290 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4094294 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409429c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40942a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04094298) */
/* WARNING: Removing unreachable block (ram,0x040941a4) */

void UniRx_CompositeDisposable__CopyTo(long param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  long local_88;
  char *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  char local_4c [4];
  undefined8 local_48;
  
  if ((DAT_09515d30 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2f18);
    FUN_03f5c2a4(&DAT_091a2f20);
    FUN_03f5c2a4(&DAT_091a2f28);
    FUN_03f5c2a4(&DAT_091ad1b0);
    FUN_03f5c2a4(&DAT_091ad1c8);
    FUN_03f5c2a4(&DAT_091ad1d8);
    FUN_03f5c2a4(&DAT_091ad198);
    FUN_03f5c2a4(&DAT_0917c300);
    DAT_09515d30 = 1;
  }
  local_48 = 0;
  local_4c[0] = '\0';
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_092179d0);
    System_ArgumentNullException___ctor(uVar5,uVar6,0);
  }
  else {
    if ((-1 < param_3) && (param_3 < *(int *)(param_2 + 0x18))) {
      local_48 = *(undefined8 *)(param_1 + 0x10);
      local_80 = local_4c;
      local_4c[0] = '\0';
      local_88 = 0;
      local_78 = &local_48;
      System_Threading_Monitor__Enter(local_48,local_4c,0);
      lVar3 = thunk_FUN_03f9944c(DAT_0917c300);
      FUN_057e0400(lVar3,DAT_091ad198);
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e185c(&local_a0,*(long *)(param_1 + 0x20),DAT_091ad1c8);
      uStack_68 = puStack_98;
      local_70 = local_a0;
      local_60 = local_90;
      puStack_98 = &local_70;
      local_a0 = 0;
      while( true ) {
        do {
          uVar4 = FUN_071bd28c(&local_70,DAT_091a2f20);
          lVar2 = DAT_091ad1b0;
          if ((uVar4 & 1) == 0) {
            FUN_071bd288(&local_70,DAT_091a2f18);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar5 = FUN_057e28a4(lVar3,DAT_091ad1d8);
            System_Array__Copy(uVar5,0,param_2,param_3,*(int *)(param_2 + 0x18) - param_3,0);
            if (*local_80 != '\0') {
              System_Threading_Monitor__Exit(*local_78,0);
            }
            if (local_88 == 0) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c548();
          }
        } while (local_60 == 0);
        if (lVar3 == 0) break;
        lVar7 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) break;
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = local_60;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar3,local_60,
                       *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_092179f8);
    System_ArgumentOutOfRangeException___ctor(uVar5,uVar6,0);
  }
  uVar6 = thunk_FUN_03fc39d4(&DAT_091c5a88);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar6);
}

